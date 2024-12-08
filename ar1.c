#include<stdio.h>
void main( ){
int arr[3][3];
printf("enter the value of numbers:");
int i;
int j;
int sum=0;
int sumut=0;
int sumlt=0;

for (i=0;i<3;i++){
for(j=0;j<3;j++){

scanf("%d",&arr[i][j]);
}
}
for (i=0;i<3;i++){
for(j=0;j<3;j++){
if (arr[i][j]%2==0)
printf("%d is even\n",arr[i][j]);
else
printf("%d is odd\n",arr[i][j]);

sum+=arr[i][j];
if (i<j)
sumut+=arr[i][j];
if (i>j)
sumlt+=arr[i][j];
}
}
printf("%d is sum of numbers\n",sum);
printf("%d is sum of upper triangle\n",sumut);
printf("%d is sum of lower triangle\n",sumlt);
}


