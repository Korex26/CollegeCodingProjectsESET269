#include<stdio.h>

int main()
{
    int num;
    float total;
    float tax;
    char item;
    char combo;
    
    printf("Select a menu item.\n");
    printf("A. Hamburger\n");
    printf("B. Pizza\n");
    printf("C. Chicken Strips\n");
    scanf("%c",&item);
    printf("Make a combo? Y for yes or N for no\n");
    scanf(" %c",&combo);
    printf("Quantity:\n");
    scanf("%d",&num);

    if (item == 'A' && combo == 'Y')
    {
        total = 8.99*num;
    }

    else if (item == 'A' && combo == 'N')
    {
        total = 6.99*num;
    }
    
    else if (item == 'B' && combo == 'Y')
    {
        total = 5.99*num;
    }
    
    else if (item == 'B' && combo == 'N')
    {
        total = 3.99*num;
    }

    else if (item == 'C' && combo == 'Y')
    {
        total = 7.99*num;
    }
    
    else
    {
        total = 5.99*num;
    }
    
    tax = total*0.0825;

    total = total + tax;

    printf("The total price is $%.2f",total);
    
    
    
    return 0;
}