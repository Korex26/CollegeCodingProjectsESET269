#include<stdio.h>

int main()
{
    int num1,num2,total1,total2,total3,total4,total5;
   
    printf("Enter First Number:\n");
    scanf("%d",&num1); 

    printf("Enter Second Number:\n");
    scanf(" %d",&num2);

    total1 = num1 + num2;
    total2 = num1 - num2;
    total3 = num1 * num2;
    total4 = num1 / num2;
    total5 = num1 % num2;

    printf("Add is %d, subtract is %d, multipy is %d, divide is %d, modulus is %d",total1,total2,total3,total4,total5);
    
    
    return 0;
}