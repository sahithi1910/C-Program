#include<stdio.h>
int fact(int n);
int n;
int res;


int  main( )
{
printf("enter the value of n:");
scanf("%d",&n);
fact(n);
printf("%d",res);
return 0;
}


int fact(int n)
{
if(n>0){
res=n*fact(n-1);
}
else
res=1;
return res;
}
