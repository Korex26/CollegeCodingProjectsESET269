#include <stdio.h>
#include <math.h>

int main() 
{
    int x;
    float y;

    printf("Please enter a positive integer: ");
    scanf("%d", &x);
    
    if (x < 0) 
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    y = sqrt(x);

    printf("The square root of %d is %.2f\n", x, y);

    return 0;
}
