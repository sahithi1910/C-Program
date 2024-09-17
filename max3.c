#include <stdio.h>
void main( )
{
int a,b,c,max;
printf("enter the first integer:");
scanf("%d",&a);
printf("enter the second integer:");
scanf("%d",&b);
printf("enter the third integer:");
scanf("%d",&c);
if (a>b&&b>c)
max=a;
else if (b>a&&b>c)
max=b;
else if(c>a&&c>b)
max=c;
printf("max is %d",max);
}