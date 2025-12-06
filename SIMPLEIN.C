//to calculate simple interest
#include<stdio.h>
#include<math.h>
void main()
{
float P,I,T,SI;
clrscr();
printf("enter the principal amount");
scanf("%f",&P);
printf("enter the rate of interest");
scanf("%f",&I);
printf("enter the duration in years");
scanf("%f",&T);
SI=(P*I*T/100);
printf("simple interest=%2f",SI);
return 0;
}