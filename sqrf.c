#include<stdio.h>
int square( );
int res,a;
int main( )
{
printf("enter the value of a:");
scanf("%d",&a);
square( );
}

int square( )
{
res=a*a;
printf("%d",res);
}