#include<stdio.h>
#include<string.h>


int main()
{
    int x = 0;
    char inputname[20];
    char inputpass[20];
    
    while(x == 0)
    {
        printf("Enter user name:\n");
        scanf("%s",inputname);
        printf("Enter password:\n");
        scanf("%s",inputpass);
        
        if (strcmp(inputname, "Admin") == 0 && strcmp(inputpass, "PASS") == 0)
        {
            printf("Correct Login\n\n");
            x = 1;
        }

        else if (strcmp(inputname, "Admin") == 0)
        {
            printf("Wrong password\n\n");
        }
    
        else if (strcmp(inputpass, "PASS") == 0)
        {
            printf("Wrong login name\n\n");
        }

        else
        {
            printf("Wrong login name and password\n\n");
        }


    }
    
    return 0;
    
}