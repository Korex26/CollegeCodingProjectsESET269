#include <stdio.h>
#include <math.h>

void function(char type, char string[100]);

int main() 
{
    char string[100];
    char type;
    printf("Enter a string:");
    scanf("%s",&string);
    
    printf("Select option.\na.Capital all letters\nb.Count letters\nc.lowercase all\nd.replace string\n");
    scanf(" %c",&type);

    function(type,string);
    
    return 0;
}

void function(char type, char string[100])
{
    int i = 0;
    int length = 0;
    int newlength = 0;
    length = strlen(string);

    if (type == 'a')
    {
        for(i=0;i<length;i++)
        {
            if (string[i] >= 'a' && string[i] <= 'z') 
            {
            string[i] -= 32;
            }
            else
            {

            }
        }
        printf("Modified string is %s", string);
    }
    
    else if (type == 'b')
    {
        for(i=0;i<length;i++)
        {
            if((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
            {
                newlength += 1;
            }
            else
            {

            }
        }
        printf("Number of letters is %d", newlength);
    }
    
    else if (type == 'c')
    {
        for(i=0;i<length;i++)
        {
            if (string[i] >= 'A' && string[i] <= 'Z') 
            {
            string[i] += 32;
            }
            else
            {

            }
        }
        printf("Modified string is %s", string);
    }

    else if(type == 'd')
    {
        char newstring[100];
        printf("New String Value:");
        scanf("%s",&newstring);
        printf("Replaced old string with %s",newstring);
    }
    
    else
    {
        printf("Invalid character.");
    }

    return 0;
}
