#include<stdio.h>
void main( )
{
int favnum;
printf("enter the fav num between 0 to 99 ");
scanf("%d",&favnum);
int count=0;
while (count<100)
{
printf("\n the value is %d",count);
if(count==favnum)
break;
count++;
}
}