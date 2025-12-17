//to print inverted right angled triangle 
#include<stdio.h>

int main()
{
int n=5,i,j;
for(i=0;i<n;i++)
{
for(j=5;j>i;j--)
{
printf("*");
}
printf("\n");
}
return 0;
}