#include <stdio.h>

int main() 
{
  int number;
  printf("Enter a number between 0 and 10:");
  scanf("%d",&number);

  while ((number <= 0) || (number > 10))
  {
    printf("Entered an invalid number.\n");
    printf("\nEnter a number between 0 and 10:");
    scanf("%d",&number);
  }

  int i;
  int sum = 0;
  for(int i = 0; i <= number; ++i)
  {
    sum = sum + i;
  }
  printf("The sum of 0 to %d is %d.\n",number,sum);

  printf("\n0 x %d = %d",number,number*0);
  printf("\n1 x %d = %d",number,number*1);
  printf("\n2 x %d = %d",number,number*2);
  printf("\n3 x %d = %d",number,number*3);
  printf("\n4 x %d = %d",number,number*4);
  printf("\n5 x %d = %d",number,number*5);
  printf("\n6 x %d = %d",number,number*6);
  printf("\n7 x %d = %d",number,number*7);
  printf("\n8 x %d = %d",number,number*8);
  printf("\n9 x %d = %d",number,number*9);
  printf("\n10 x %d = %d",number,number*10);
  
  return 0;
}
