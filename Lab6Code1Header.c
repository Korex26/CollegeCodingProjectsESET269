#ifndef Lab6Code1Header_c
#define Lab6Code1Header_c

#define MAX_DRUGS 4

typedef struct 
{
    char name[10];
    int dose;
    char reaction[4];
    char booster[3];
} 

Drug;

void populateDrugArray(Drug *drugs);
void determineAcceptance(Drug *drugs);

#endif