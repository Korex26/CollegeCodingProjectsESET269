#include<stdio.h>
#include<string.h>

int main()
{
    int num;
    int count = 0;
    int newnum = 0;

    printf("Enter a number:\n");
    scanf("%d",&num);

    for (count = 0; count <= num; ++count)
    {   
        if (count % 2 == 0)
        {
            newnum = newnum + count;
        }
        else
        {
        }
    }
    
    printf("Your sum of even total numbers is %d",newnum);

    return 0;
}

