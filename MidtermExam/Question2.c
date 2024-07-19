#include <stdio.h>

int main() 
{
  char str[100];
  int length = 0;
  int i;
  char newstr[100];

  printf("Enter a string: ");
  scanf("%s",&str);

  while(str[length] != '\0')
  {
    length++;
  }

  printf("Your string backwards is: ");

  for(i=0;i <= length;i++)
  {
    newstr[i] = str[length-i];
    printf("%c",newstr[i]);
  }

  return 0;
}
