#include<stdio.h>
void main( )
{
int n;
printf("enter the number:");
scanf("%d",&n);
if (n%5==0&&n%11==0)
printf("%d is divisible",n);
else 
printf("%d is not divisible",n);
}