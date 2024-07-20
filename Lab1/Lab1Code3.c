#include<stdio.h>

int main()
{
    int x;
    char first[20];
    char last[20];
   
    printf("Enter first name:\n");
    scanf("%s",first);

    printf("Enter last name:\n");
    scanf("%s",last);

    printf("Enter age:\n");
    scanf("%d",&x);

    printf("First name: %s Last name: %s Age: %d\n",first,last,x);

    strcpy(first, "John");
    strcpy(last, "Doe");
    x = 99;

    printf("First name: %s Last name: %s Age: %d",first,last,x);

    return 0;
}
