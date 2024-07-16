#include<stdio.h>
#include<string.h>

int main()
{
    int x,y,z,sum;

    printf("Please enter a integer between 1 and 20:\n");
    scanf("%d",&x);

    printf("Please enter a differet integer between 1 and 20:\n");
    scanf("%d",&y);

    printf("Please enter a different integer between 1 and 20:\n");
    scanf("%d",&z);

    if (x >= z && y >= z)
    {
        sum = x*y;
        printf("Your sum is %d",sum);
    }
    
    else if (x >= y && z >= y)
    {
        sum = x*z;
        printf("Your sum is %d",sum);
    }

    else
    {
        sum = z*y;
        printf("Your sum is %d",sum);
    }

    return 0;
}