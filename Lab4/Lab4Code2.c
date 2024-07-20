#include <stdio.h>
#include <math.h>
#define M_PI acos(-1.0)

int main() 
{
    float array[100];
    int i;
    float arrayvolume[100];
    float arrayarea[100];

    for(i=0;i<=(3);i++)
    {
    printf("Enter radius %d: ", i+1);
    scanf("%f",&array[i]);
    arrayvolume[i] = (array[i] * array[i] * array[i] * (1.33333333333333333333333) * (M_PI));
    arrayarea[i] = (array[i] * array[i] * (M_PI));
    }

    for(i=0;i<=(3);i++)
    {
    printf("The volume for radius %.2f is %.2f\n", array[i], arrayvolume[i]);
    printf("The area for radius %.2f is %.2f\n", array[i], arrayarea[i]);
    }

    return 0;
}
