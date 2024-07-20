#include <stdio.h>

int main() 
{
  int size;
    
  printf("Enter the size of your array:\n");
  scanf("%d",&size);

  int elements[size];
  int newelements[size];

  printf("Please enter the %d elements from your first array:\n",size);

  for(int i = 0; i < size; i++) 
  {
    scanf("%d", &elements[i]);
  }

  for(int i = 0; i < size; i++)
  {
  newelements[i] = elements[i];
  }

  printf("Here are your elements in your first array:\n");
  for(int i = 0; i < size; i++)
  {
  printf("%d\n", elements[i]);
  }

  printf("Here are your elements in your second array:\n");
  for(int i = 0; i < size; i++)
  {
  printf("%d\n", newelements[i]);
  }

  return 0;
}