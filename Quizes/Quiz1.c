#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,z;
float average;
printf("Please enter three numbers\n"); 
scanf("%d%d%d",&x,&y,&z); 
average = (x+y+z) / 3.0; 
printf("The average is %f", average);
return 0;
}
