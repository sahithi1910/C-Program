#include<stdio.h>
void main( )
{
int n;
printf("enter the number:");
scanf("%d",&n);
if (n>0)
printf("%d is positive",n);
else if(n<0)
printf("%d is negative",n);
else if(n==0)
printf("%d is zero",n);
}