#include<stdio.h>
int max(int,int,int);
int a,b,c;
int res;

int main( )
{
printf("enter the value of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
max(a,b,c);
printf("%d",res);
return 0;
}


int max(int a,int b,int c)
{
if(a>b&&a>c){
res=a;
}
else if(b>a&&b>c)
{
res=b;
}
else
res=c;
return res;
}