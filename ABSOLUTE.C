//to calculate absolute value and square root
#include<stdio.h>
#include<math.h>

int main()
{
float n,a,s; 
printf("enter the number");
scanf("%f",&n);
a=abs(n);
printf("calculate absolute value is:%f\n",a);
s=sqrt(a);
printf("calculate square root of a:%f\n",s);
return 0;
}