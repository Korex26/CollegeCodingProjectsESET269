#include<stdio.h>
#include<string.h>

int main()
{
    int size;
    
    printf("Enter the size of your array:\n");
    scanf("%d",&size);

    int array[size];

    
    printf("Enter a list of %d numbers separated by a single space that you want to calculate the sum of:\n", size);
    
    int i;
    for ( i = 0; i < size; i++)
    {
    scanf("%d", &array[i]);
    }

    int sum = 0;
    
    for (i = 0; i < size; i++) 
    {
    sum += array[i];
    }
    
    printf("The sum of your array is %d", sum);

    return 0;
}
