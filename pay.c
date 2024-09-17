#include<stdio.h>
void main( )
{
float h,r,w,pay;
printf("enter the no. of hours:");
scanf("%f",&h);
printf("enter the rate per hour:");
scanf("%f",&r);
printf("enter no.of weeks in a month:");
scanf("%f",&w);
pay=h*r*w;
printf("monthly pay is %.2f",pay);
}