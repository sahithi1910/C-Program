#include<stdio.h>
int sum(int k);

int main() {
 int k;
  printf("enter the value of k:");
  scanf("%d",&k);
   int result;
  printf("%d", result);
 
}

int sum(int k) {
int result;
int i=0;
while(i<=k){
result= i+sum(i-1);
i++;
}
}

