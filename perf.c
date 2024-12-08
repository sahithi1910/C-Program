#include<stdio.h>
int peri(int);
int area(int);
int res,resu;


int main( )
{
int a;
printf("enter the value of a:");
scanf("%d",&a);
res=peri(a);
resu=area(a);
printf("perimeter is %d\n",res);
printf("area is %d\n",resu);
return 0;
}

int peri(int a)
{
res=4*a;
return res;
}

int area(int a)
{
resu=a*a;
return resu;
}
