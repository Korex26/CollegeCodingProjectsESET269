#include <stdio.h>

int main() 
{
  int array[100];
  int size;
  int i;
  int arrayeven[100];
  int arrayodd[100];
  int n = 0;
  int s = 0;
  int sizeeven = 0;
  int sizeodd = 0;

  printf("Enter the size of your array of odd and even integers: ");
  scanf("%d",&size);

  for(i=0;i<=(size-1);i++)
  {
    printf("Enter the number %d integer of your array: ", i+1);
    scanf("%d",&array[i]);
    if(array[i] % 2 == 0)
    {
        arrayeven[n] = array[i];
        sizeeven += 1;
        n++;
    }
    else
    {
        arrayodd[s] = array[i];
        sizeodd += 1;
        s++;
    }
  }
  printf("Your even integers are: ");
  for(i=0;i<=(sizeeven-1);i++)
  {
    printf("%d ",arrayeven[i]);
  }
  printf("\n");
  printf("Your odd integers are: ");
  for(i=0;i<=(sizeodd-1);i++)
  {
    printf("%d ",arrayodd[i]);
  }

  return 0;
}
