#include <stdio.h>
#include <math.h>
#define M_PI acos(-1.0)

float function1(Void);
float function2(float x,char y);
char string[100];

int main() 
{
    float z = 0;
    float i = 0;
    char option = 0;
    
    z = function1();

    printf("1. Area of Circle\n2. Volume of sphere\n");
    scanf(" %c",&option);

    if(option == '1')
    {
        printf("The area of the circle is %.1f.",i = function2(z,option));
    }

    else if (option == '2')
    {
        printf("The volume of the sphere is %.1f.",i = function2(z,option));
    }

    else
    {
        printf("Invalid character.");
    }
    
    return 0;
}

float function1(Void)
{
    float radius = 0;
    printf("Enter a radius value: ");
    scanf("%f",&radius);
    return radius;
}

float function2(float x,char y)
{
    if (y == '1')
    {
        float area;
        area = x * x * M_PI;
        return area;

    }

    else if (y == '2')
    {
        float volume;
        volume = 1.3333333333 * M_PI * x * x * x;
        return volume;
    }

    else
    {
    
    }
    return 0;
}
