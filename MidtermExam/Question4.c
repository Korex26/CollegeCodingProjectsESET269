#include <stdio.h>

int main() 
{
  char name[100];
  int length = 0;
  int i = 0;

  printf("Enter your first name: ");
  scanf("%s",&name);
  
  while(name[length] != '\0')
  {
    length++;
  }

  for (i= 0; i<= (length-1); i++)
  {
    if(!((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z')))
    {
      printf("Invalid input please only enter letters.\n");
      length = 0;
      i=0;
      printf("Enter your first name: ");
      scanf("%s",&name);
      while(name[length] != '\0')
      {
      length++;
      }
    }
    else
    {

    }
  }

  if (name[0] >= 'a' && name[0] <= 'z') 
  {
    name[0] -= 32;
  }
  else
  {

  }
  
  char nation[100];
  length = 0;
  i = 0;

  printf("Enter your nationality: ");
  scanf("%s",&nation);

  while(nation[length] != '\0')
  {
    length++;
  }

  for (i= 0; i<= (length-1); i++)
  {
    if(!((nation[i] >= 'a' && nation[i] <= 'z') || (nation[i] >= 'A' && nation[i] <= 'Z')))
    {
      printf("Invalid input please only enter letters.\n");
      length = 0;
      i=0;
      printf("Enter your nationality: ");
      scanf("%s",&nation);
      while(nation[length] != '\0')
      {
      length++;
      }
    }
    else
    {

    }
  }

  if (nation[0] >= 'a' && nation[0] <= 'z') 
  {
    nation[0] -= 32;
  }
  else
  {

  }
  
  
  
  
  
  
  printf("Your first name is: %s\n",name);
  printf("Your nationality is: %s\n",nation);

  int namelength = 0;
  int nationlength = 0;
  char concate[100] = {};


  while(name[namelength] != '\0')
  {
    namelength++;
  }

  while(nation[nationlength] != '\0')
  {
    nationlength++;
  }

  for(i=0; i<=namelength; i++)
  {
    concate[i] = name[i];
  }

  for(i=0; i<=nationlength; i++)
  {
    concate[i+namelength] = nation[i];
  }

  printf("Your concatenated name and nationality is: %s\n", concate);

  int concatelength = 0;

  while(concate[concatelength] != '\0')
  {
    concatelength++;
  }

  printf("The length of your concatenated string is: %d",concatelength);
  return 0;
}
