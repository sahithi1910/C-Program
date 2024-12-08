#include<stdio.h>
int even( );
int a;
int res;


int main( )
{
printf("enter the value of a");
scanf( "%d",&a);
res=even(a);
printf("%d",res);
}


int even(int a)
{
if(a%2==0)
{
res=1;
return res;
}
else
res=0;
return res;
}


