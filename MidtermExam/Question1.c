#include <stdio.h>

int main() 
{
  int i = 0;
  int z = 0;
  int n;
  int m;

  printf("Enter the number of rows in your integer array: ");
  scanf("%d",&n);

  printf("Enter the number of columns in each row: ");
  scanf("%d",&m);

  int G[n][m];
  int total = 0;
  int numprime = 0;
  int prime = 1;
  int r = 0;

  for (z=0; z<=(n-1); z++)
  {
   for (i=0; i<=(m-1); i++)
   {
    prime = 1;
    printf("Enter the integer for row %d column %d of your array: ", z+1, i+1);
    scanf("%d",&G[z][i]);
    if((G[z][i] == 0) || (G[z][i] == 1))
    {
        prime = 0;
    }
    else
    {

    }
    for(r = 2; r <= ((G[z][i])/2); r++)
    {
      if((G[z][i]) % r == 0 )
      {
        prime = 0;
        break;
      }
      else
      {

      }
    }
    if(prime == 1)
    {
      total = total + (G[z][i]);
      numprime++;
    }
    else
    {

    }
   }
  }
  float newtotal = total;
  float newnumprime = numprime;
  float average = newtotal/newnumprime;
  printf("The average of all prime numbers in your integer array is: %.2f",average);
  return 0;
}
