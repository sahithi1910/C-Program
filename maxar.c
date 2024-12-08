#include <stdio.h>
int max(int arr[],int n)
{
int a=arr[0];
int i;
for(int i=1;i<n;i++);
{
if(arr[i]>a)
{
max=arr[i];
}
printf("%d",arr[i]);
return a;
}

int main( )
{
int arr[]={10,20,40,39,50};
int n;
n=sizeof(arr)/sizeof(arr[0]);
max(arr,n);
printf("%d",arr[i]);

return 0;
}