#include<stdio.h>
void main( )
{
int n;
printf("enter the year:");
scanf("%d",&n);
if (n%4==0)
printf("%d is leap year",n);
else
printf("%d is not a leap year",n);
}