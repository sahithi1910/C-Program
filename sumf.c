#include<stdio.h>
int sum(int,int);
int res;

int main( )
{
int a,b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
 res=sum(a,b);


}


int sum(int a,int b)
{
res=a+b;
return res;

}
