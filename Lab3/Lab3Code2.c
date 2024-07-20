#include <stdio.h>

int main() 
{
    int pin;
    int option;
    printf("Enter PIN:");
    scanf("%d",&pin);

    while (pin != 6457)
    {
    printf("PIN is incorrect.\n");
    printf("\nEnter PIN:");
    scanf("%d",&pin);
    }

    printf("\nSelect Option\n1.Withdraw\n2.Deposit\n3.Quit\n");
    scanf("%d",&option);

    while ((option!= 1) && (option!= 2) && (option!= 3))
    {
    printf("Not valid option.\n");
    printf("\nSelect Option\n1.Withdraw\n2.Deposit\n3.Quit\n");
    scanf("%d",&option);
    }

    float funds = 5000;
    float withdrawlamount;
    float depositamount;
    int numwithdrawls = 1;
    int end = 1;
    float depositlimit = 3000;

    while (end)
    {
        switch (option) 
        {
        case 1:
            if (numwithdrawls > 3)
            {
                printf("Withdraw limit reached.\n");
            }
            else
            {
                printf("Withdraw Amount:");
                scanf("%f",&withdrawlamount);
                if (withdrawlamount > funds)
                {
                    printf("Not enough money for withdraw.\n");
                }
                else
                {
                    funds = funds-withdrawlamount;
                    printf("New Balance: %.2f\n",funds);
                    numwithdrawls = numwithdrawls + 1;
                }
            }
            printf("\nSelect Option\n1.Withdraw\n2.Deposit\n3.Quit\n");
            scanf("%d",&option);
            while ((option!= 1) && (option!= 2) && (option!= 3))
            {
            printf("Not valid option.\n");
            printf("\nSelect Option\n1.Withdraw\n2.Deposit\n3.Quit\n");
            scanf("%d",&option);
            }
            break;
    
        case 2:
            printf("Deposit Amount:");
            scanf("%f",&depositamount);
            if (depositamount > depositlimit)
            {
                printf("Deposit amount too large. Ignoring transaction.\n");
                printf("\nBalance %.2f\n",funds);
            }
            else
            {
                funds = funds + depositamount;
                printf("New Balance: %.2f\n",funds);
            }
            printf("\nSelect Option\n1.Withdraw\n2.Deposit\n3.Quit\n");
            scanf("%d",&option);
            while ((option!= 1) && (option!= 2) && (option!= 3))
            {
            printf("Not valid option.\n");
            printf("\nSelect Option\n1.Withdraw\n2.Deposit\n3.Quit\n");
            scanf("%d",&option);
            }
            break;
 
        default:
            end = 0;
            break;
        
        }
    }
    printf("Quitting Prgram!");
    return 0;
}
