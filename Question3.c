#include <stdio.h>

int main() 
{
  //printf("$$$$$$$$$$\n");
  //printf("    $$\n");
  //printf("    $$\n");
  //printf("    $$\n");
  //printf("    $$\n");
  //return 0;
  char array1[1]= {'3','5'};
  char array2[1]= {" "};
  int z= 0;

  while(z<=2)
  {
  for (int i=0;i<=9;i++)
  {
    printf("%c", array1[0]);
  }

  printf("\n");

  for (int i=0;i<=3;i++)
  {
    for(int i=0;i<=3;i++)
    {
    printf("%c", array2[0]);
    }
    for(int i=0;i<=1;i++)
    {
    printf("%c", array1[0]);
    }
    printf("\n");
  }
  z++;
  }
  return 0;
}