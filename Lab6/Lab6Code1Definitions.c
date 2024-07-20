#include <stdio.h>
#include "Lab6Code1Header.c"

void populateDrugArray(Drug *drugs) 
{
    Drug drugList[MAX_DRUGS] = 
    {
        {"UN001", 30, "Yes", "No"},
        {"UN2134", 25, "Yes", "Yes"},
        {"UN009", 30, "No", "No"},
        {"UN3453", 35, "Yes", "Yes"}
    };

    for (int i = 0; i < MAX_DRUGS; i++) 
    {
        drugs[i] = drugList[i];
    }
}

void determineAcceptance(Drug *drugs) 
{
    for (int i = 0; i < MAX_DRUGS; i++) 
    {
        if (drugs[i].dose > 30 && strcmp(drugs[i].reaction, "Yes") == 0) 
        {
            printf("Drug %s is rejected.\n", drugs[i].name);
        } 
        
        else if (strcmp(drugs[i].reaction, "Yes") == 0 && strcmp(drugs[i].booster, "Yes") == 0) 
        {
            printf("Drug %s is rejected.\n", drugs[i].name);
        } 
        
        else 
        {
            printf("Drug %s is accepted.\n", drugs[i].name);
        }
    }
}
