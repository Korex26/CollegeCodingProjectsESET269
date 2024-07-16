#include<stdio.h>

int main()
{
    int c;
    float x;
    char a,b;
   
    printf("What is initial of first name?\n");
    scanf("%c",&a);

    printf("What is initial of last name?\n");
    scanf(" %c",&b);

    printf("What is your favorite number?\n");
    scanf(" %d",&c);

    printf("Write a decimal number as x.xxx\n");
    scanf("%f",&x);

    printf("First initial %c, Last initial %c, fav. # %d, decimal # %.3f",a,b,c,x);

    return 0;
}