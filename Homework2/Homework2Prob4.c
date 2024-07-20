#include<stdio.h>
#include<string.h>

int main()
{
    int x;

    printf("Please enter a integer:\n");
    scanf("%d",&x);

    if (x % 2 == 0)
    {
        printf("Your number is even");
    }
    
    else
    {
        printf("Your number is odd");
    }

    return 0;
}
