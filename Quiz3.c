#include<stdio.h>
#include<string.h>

int main() 
{
    int number, x;

    printf("Enter any number: ");
    scanf("%d", &number);

    printf("The factors of your number are: ");
    
    for (x = 1; x <= number; ++x) 
    {
        if (number % x == 0) 
        {
            printf("%d ", x);
        }
    }
    
    return 0;

}