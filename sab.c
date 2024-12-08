#include <stdio.h>
void main() {
int arr[5] = {1,2,3,4,5}; 
 int i=arr[0];
 int *j=&arr[0];
 printf("%d\n",i);     
 printf("%p\n",&i);     
printf("%p\n",j);
printf("%d\n",*j);
}