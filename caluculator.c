#include<stdio.h>
void main ( )
{
float a,b;
float result;
char ch;
printf("enter the operation:");
scanf("%c",&ch);
printf("enter the first integer:");
scanf("%f",&a);
printf("enter the second integer:");
scanf("%f",&b);
switch (ch)
{
case1 '+':
result=a+b;
printf("result is %f",result);
break;
case2 '-':
result=a-b;
printf("result is %f",result);
break;
case3 '*':
result=a*b;
printf("result is %f",result);
break;
case4 '/':
result=a/b;
printf("result is %f",result);
break;
default:
printf("wrong input");
}
}