#include <stdio.h>

int main() 
{
    char pass[100];
    int length = 0;
    int h = 0;
    int condition1 = 0;
    int condition2 = 0;
    int condition3 = 0;
    int condition4 = 0;
    int allconditions = 0;

    while(allconditions != 1)
    {
    int condition1 = 0;
    int condition2 = 0;
    int condition3 = 0;
    int condition4 = 0;
    int length = 0;

    printf("Enter a password: ");
    scanf("%s",&pass);
  
    while(pass[length] != '\0')
    {
        length++;
    }

    if (length >= 8)
    {
        condition1 = 1;
    }

    for (h=0; h<= (length-1); h++)
    {
        if(pass[h] == '?'|| pass[h] == '_' || pass[h] == '$' || pass[h] == '!')
        {
            condition2 = 1;
            break;
        }
        
        else
        {

        }
    }

    for (h=0; h<= (length-1); h++)
    {
        if(pass[h] >= '0' && pass[h] <= '9')
        {
            condition3 = 1;
            break;
        }
        
        else
        {

        }
    }

    if(pass[0] >= 'A' && pass[0] <= 'Z')
    {
        condition4 = 1;
    }
    else
    {

    }
    
    if(condition1 == 1 && condition2 == 1 && condition3 == 1 && condition4 == 1)
    {
        allconditions = 1;
    }

    else
    {
        printf("Password Invalid!\n");
    }
    }

    printf("Password Valid\n");

    return 0;
}
