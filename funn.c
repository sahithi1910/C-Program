#include<stdio.h>
int sum( );
int x,y;
int result;

int main( )
{
printf("enter the numbers:");
scanf("%d%d",&x,&y);
sum();
printf("result is %d",result);
return 0; 
}

int sum( )
{
result=x+y;
return result;
}
