#include<stdio.h>

float avg(int marks[ ],int N)
{
int sum=0;
for(int i=0;i<N;i++)
{
sum=sum+marks[i];
}
float=(float)sum/N;
printf("%d",avg);
return avg;
}
int main( )
{
int marks[ ]={75,74,73};
int N=sizeof(marks)/sizeof(marks[0]);
avg(marks[],N);
return 0;
}
