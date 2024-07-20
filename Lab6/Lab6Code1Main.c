#include <stdio.h>
#include "Lab6Code1Header.c"
#include "Lab6Code1Definitions.c"

int main() 
{
    Drug drugs[MAX_DRUGS];

    populateDrugArray(drugs);

    determineAcceptance(drugs);

    return 0;
}
