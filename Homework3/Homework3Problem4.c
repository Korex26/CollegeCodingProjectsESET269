#include <stdio.h>

int main() 
{
    int x;
    int y;
    x = 1;
    y = 1;
    int sum1 = 0;
    int sum2 = 0;

    while (sum1 < 50)
    {
        sum1 = 3*x;
        if(sum1>50)
        {
            break;
        }
        
        else
        {
            printf("%d\n",sum1);
            x++;
        }
    }

    while (sum2 < 50)
    {
        sum2 = 5*y;
        if(sum2>50)
        {
            break;
        }
        
        else
        {
            printf("%d\n",sum2);
            y++;
        }
    }
    
    return 0;
}
