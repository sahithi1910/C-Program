#include<stdio.h>
void main( ){
float a,b,res;
printf("enter two numbers");
scanf("%f%f",&a,&b);
res=a/b;
if (b!=0)
printf("result is %f",res);
else
printf("invalid statement");
}