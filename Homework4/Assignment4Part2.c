#include <stdio.h>

int main() 
{
    char inputstring[100];
    int outputnum[5] = {0};
    int x = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", inputstring);

    while (inputstring[x]) 
    {
        if (inputstring[x] == 'a') 
        {
            outputnum[0]++;
        } 
        
        else if (inputstring[x] == 'e') 
        {
            outputnum[1]++;
        } 
        
        else if (inputstring[x] == 'i') 
        {
            outputnum[2]++;
        } 
        
        else if (inputstring[x] == 'o') 
        {
            outputnum[3]++;
        } 
        
        else if (inputstring[x] == 'u') 
        {
            outputnum[4]++;
        }
        x++;
    }

    printf("The count of each vowel is:\nA: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", outputnum[0], outputnum[1], outputnum[2], outputnum[3], outputnum[4]);

    return 0;
}
