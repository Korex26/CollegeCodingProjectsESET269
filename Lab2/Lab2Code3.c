#include<stdio.h>
#include<string.h>

int main()
{
    int sbp,dbp,pp;
    float map;
    float num = 3.00;
    float num2 = 2.00;
    
    printf("Enter SBP:\n");
    scanf("%d",&sbp);
    printf("Enter DBP:\n");
    scanf("%d",&dbp);

    pp = sbp - dbp;

    map = ((num2*(dbp+sbp))/num);

    printf("Pulse Pressure:%d\n",pp);
    printf("MAP:%.2f\n",map);

    if (sbp < 120 && dbp < 80)
    {
        printf("NORMAL");
    }

    else if (sbp >= 120 && sbp <= 129 && dbp < 80)
    {
        printf("ELEVATED");
    }

    else if (sbp >= 130 && sbp <= 139 || dbp >= 80 && dbp <= 89)
    {
        printf("HYPERTENSION Stage 1");
    }

    else
    {
        printf("HYPERTENSION Stage 2");
    }

    return 0;
}
