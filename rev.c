#include <stdio.h>
int main( )
{
int arr[6]={20,20,39,40,67,12};
int i;
for(int i=0;i<6;i++)
{
printf("%d\n",arr[i]);
}
printf("\n");
for(int i=5;i>=0;i--) 
{
printf("%d\n",arr[i]);
}
return 0;
}