#include <stdio.h>

int main() 
{
  int vals[5];

  printf("Please enter 5 values:\n");

  for(int i = 0; i < 5; ++i) 
  {
    scanf("%d", &vals[i]);
  }

  printf("Here are your values:\n");

  for(int i = 0; i < 5; ++i) 
  {
     printf("%d\n", vals[i]);
  }

  return 0;
}