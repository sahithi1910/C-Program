#include<stdio.h>
int fact(int x);
void main( ){
int x;
printf("enter the value:");
scanf("%d",&x);
printf("factorial is %d",fact(x));
}
int fact(int x)
{
if(x==0||x==1)
return 1;
else
{
return x*fact(x-1);
}
}
