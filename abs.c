#include<stdio.h>
int abso(int);
int a;
int res;


int main( )
{
printf("enter the value of a:");
scanf("%d",&a);
res=abso(a);
printf("%d",res);
}

int abso(int a)
{
if(a<0)
{
res=-a;
}
else
res=a;
return res;
}