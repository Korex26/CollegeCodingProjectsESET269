#include <stdio.h>

int main() 
{
    int i;
    float Average1 = 0;
    float Average2 = 0;
    float Average3 = 0;
    float array1[100] = {80,99,100,60,90,74,88};
    float array2[100] = {100,88,75,70,61,55,89};
    float array3[100] = {55,76,50,80,88,100,100};
    int numAs = 0;
    int numBs = 0;
    int numCs = 0;
    int numDs = 0;
    int numFs = 0;

    for(i=0; i<7; i++)
    {
        Average1 += array1[i];
        if (array1[i] >= 90)
        {
            numAs += 1;
        }
        else if (array1[i] < 90 && array1[i] >= 80)
        {
            numBs += 1;
        }
        else if (array1[i] < 80 && array1[i] >= 70)
        {
            numCs += 1;
        }
        else if (array1[i] < 70 && array1[i] >= 60)
        {
            numDs += 1;
        }
        else
        {
            numFs += 1;
        }
    }

    Average1 /= 7;

    for(i=0; i<7; i++)
    {
        Average2 += array2[i];
        if (array2[i] >= 90)
        {
            numAs += 1;
        }
        else if (array2[i] < 90 && array2[i] >= 80)
        {
            numBs += 1;
        }
        else if (array2[i] < 80 && array2[i] >= 70)
        {
            numCs += 1;
        }
        else if (array2[i] < 70 && array2[i] >= 60)
        {
            numDs += 1;
        }
        else
        {
            numFs += 1;
        }
    }

    Average2 /= 7;

    for(i=0; i<7; i++)
    {
        Average3 += array3[i];
        if (array3[i] >= 90)
        {
            numAs += 1;
        }
        else if (array3[i] < 90 && array3[i] >= 80)
        {
            numBs += 1;
        }
        else if (array3[i] < 80 && array3[i] >= 70)
        {
            numCs += 1;
        }
        else if (array3[i] < 70 && array3[i] >= 60)
        {
            numDs += 1;
        }
        else
        {
            numFs += 1;
        }
    }

    Average3 /= 7;



    printf("Average for section 101: %.2f\n",Average1);
    printf("Average for section 102: %.2f\n",Average2);
    printf("Average for section 103: %.2f\n\n",Average3);
    

    printf("The number of As is %d\n", numAs);
    printf("The number of Bs is %d\n", numBs);
    printf("The number of Cs is %d\n", numCs);
    printf("The number of Ds is %d\n", numDs);
    printf("The number of Fs is %d\n", numFs);



    return 0;
}
