#include <stdlib.h>
#include <stdio.h>
#include "msp.h"

void UARTInit(void);
void TX(char text[]);
int RX(void);
void ADCInit(void);
float tempRead(void);
void delay(int delay);

void delay(int delay) 
{
  volatile int i;
  for (i = delay; i > 0; i--);
}

int main(void)
{
	//sprintf()
	//TX("%d", num)
	UARTInit();
	int var = 0;
	while (var == 0)
	{
	TX("MSP432 Menu\n\r");
	TX("1. RGB Control\n\r");
	TX("2. Digitial Input\n\r");
	TX("3. Temperature Reading\n\r");
	int num = RX();
	
	if (num ==1)
	{
		
		TX("Enter Combination of RGB (1 - 7):\n\r");
		int combination = RX();
		if(combination <= 0 || combination >= 8)
		{
			combination = 7;
		}
		else
		{
			
		}
		
		TX("Enter Toggle Time:\n\r");
		int toggle = RX();
		
		TX("Enter Number of Blinks:\n\r");
		int blinks = RX();
		
		TX("Blinking LED...\n\r");

		int i = 0;
		for (i = 0; i<blinks; i++)
		{
			P2->SEL0 &= ~7;
			P2->SEL1 &= ~7;
			P2->DIR |= 7;
			P2->OUT &= ~7;
			
			P2->OUT |= combination;
				
			P2 ->SEL0 =0x00;
			P2 ->SEL1 = 0x00;
			P2 ->DIR |=0x01;
			TIMER32_1 ->LOAD =(toggle*3000000)-1;
			TIMER32_1 ->CONTROL |=0x42;
			//P2 ->OUT |=0x01;
			TIMER32_1 ->CONTROL |=0x80;
			while((TIMER32_1 ->RIS & 1)!=1)
			{
				
			}
			TIMER32_1->INTCLR &=~0x01;
			P2 ->OUT &=~0x01;
			TIMER32_1 ->CONTROL &=~0x80;
			
			P2->OUT &= ~combination;
				
			P2 ->SEL0 =0x00;
			P2 ->SEL1 = 0x00;
			P2 ->DIR |=0x01;
			TIMER32_1 ->LOAD =(toggle*3000000)-1;
			TIMER32_1 ->CONTROL |=0x42;
			//P2 ->OUT |=0x01;
			TIMER32_1 ->CONTROL |=0x80;
			while((TIMER32_1 ->RIS & 1)!=1)
			{
				
			}
			TIMER32_1->INTCLR &=~0x01;
			P2 ->OUT &=~0x01;
			TIMER32_1 ->CONTROL &=~0x80;
		}
			
		TX("Done\n\r");
		var = 0;
	}
	
	else if (num==2)
	{
		P1->DIR &= ~(BIT1 | BIT4);
    P1->REN |= (BIT1 | BIT4);
    P1->OUT |= (BIT1 | BIT4);

    if ((!(P1->IN & BIT1)) && (!(P1->IN & BIT4)))
		{
			TX("Both Button pressed.\n\r");
		}
		else if (!(P1->IN & BIT1)) 
		{
      TX("Button 1 pressed.\n\r");
    }
		else if (!(P1->IN & BIT4)) 
		{
      TX("Button 2 pressed.\n\r");
    }
		else
		{
			TX("No Button pressed.\n\r");
		}
    delay(10000);
		var = 0;
	}
	
	else if (num==3)
	{
		ADCInit();
		TX("Enter Number of Temperature Reading (1 - 5):\n\r");
		int tempnum = RX();
		if(tempnum <= 0 || tempnum >= 6)
		{
			tempnum = 5;
		}
		else
		{
			
		}
		int i = 0;
		for (i = 0; i<tempnum; i++)
		{
			float tempC = tempRead();
			float tempF = tempC*33.80;
			char buffer[50] = {};
			sprintf(buffer, "Reading %d: %.2f C & %.2f F\n\r", i+1, tempC, tempF);
			TX(buffer);
			
			SysTick ->LOAD = 3000000-1;
			SysTick ->CTRL |=0x4;
			
			SysTick ->CTRL |=0x1;
			while((SysTick ->CTRL & 0x10000)==0)
			{
				
			}
			
			SysTick ->CTRL &=~0x1;
		}
		
		var = 0;
	}
	
	else
	{
		TX("Invalid Menu Option\n\r");
	}
	
	}
	return 0;
}

void UARTInit(void)
{
	EUSCI_A0 ->CTLW0 |= 1; 
	EUSCI_A0 ->MCTLW = 0;
	EUSCI_A0 ->CTLW0 |= 0x80; 
	EUSCI_A0 ->BRW = 0x34; 
	EUSCI_A0 ->CTLW0 &= ~0x01;
P1->SEL0 |= 0x0C;           
    	P1->SEL1 &= ~0x0C;
	return;
}

void TX(char text[]) //printf(�%f�, 2.36) -> s printf()
{
	int i =0;
	while(text[i] != '\0')
	{
		EUSCI_A0 ->TXBUF = text[i];
		while((EUSCI_A0 ->IFG & 0x02) == 0)
		{
			//wait until character sent
		}
		i++;
	}
	
	return;
}

int RX(void)
{
	int i = 0;
	char command[2];
	char x;
	while(1)
	{
		if((EUSCI_A0 ->IFG & 0x01) !=0) //data in RX buffer
		{
			command[i] = EUSCI_A0 ->RXBUF;
			EUSCI_A0 ->TXBUF = command[i]; //echo
			while((EUSCI_A0 ->IFG & 0x02)==0); //wait
			
			if(command[i] == '\r')
			{
				command[i] = '\0';
				break;
			}
			else
			{
				i++;
			}
		}
	}
	x = atoi(command);
	TX("\n\r");
	return x;
}

void ADCInit(void)
{
	//Ref_A settings
	REF_A ->CTL0 &= ~0x8; //enable temp sensor
	REF_A ->CTL0 |= 0x30; //set ref voltage
	REF_A ->CTL0 &= ~0x01; //enable ref voltage
	
	//do ADC stuff
	ADC14 ->CTL0 |= 0x10; //turn on the ADC
	ADC14 ->CTL0 &= ~0x02; //disable ADC
	ADC14 ->CTL0 |=0x4180700; //no prescale, mclk, 192 SHT
	ADC14 ->CTL1 &= ~0x1F0000; //configure memory register 0
	ADC14 ->CTL1 |= 0x800000; //route temp sense
	ADC14 ->MCTL[0] |= 0x100; //vref pos int buffer
	ADC14 ->MCTL[0] |= 22; //channel 22
	ADC14 ->CTL0 |=0x02; //enable adc
		
	return;
} 

float tempRead(void)
{
	float temp; //temperature variable
	uint32_t cal30 = TLV ->ADC14_REF2P5V_TS30C; //calibration constant
	uint32_t cal85 = TLV ->ADC14_REF2P5V_TS85C; //calibration constant
	float calDiff = cal85 - cal30; //calibration difference
	ADC14 ->CTL0 |= 0x01; //start conversion
	while((ADC14 ->IFGR0) ==0) 
	{
		//wait for conversion
	}
	temp = ADC14 ->MEM[0]; //assign ADC value
	temp = (temp - cal30) * 55; //math for temperature per manual
	temp = (temp/calDiff) + 30; //math for temperature per manual
	
	return temp; //return temperature in degrees C
}
