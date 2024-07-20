#include <stdio.h>

void bubbleSort(int array[], int size) 
{
    int x, y, temp;
    for (x = 0; x < size - 1; x++) 
    {
        for (y = 0; y < size - x - 1; y++) 
        {
            if (array[y] > array[y + 1]) 
            {
                temp = array[y];
                array[y] = array[y + 1];
                array[y + 1] = temp;
            }
        }
    }
}

int main() 
{
    int array[5];
    int i;
    
    printf("Please enter 5 values:\n");

    for(int i = 0; i < 5; ++i) 
    {
    scanf("%d", &array[i]);
    }
    
    int size = sizeof(array) / sizeof(array[0]);
    int x;

    bubbleSort(array, size);

    printf("Your array in ascending order is: \n");
    for (x = 0; x < size; x++) 
    {
        printf("%d ", array[x]);
    }
    printf("\n");

    return 0;
}