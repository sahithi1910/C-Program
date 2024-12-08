 #include<stdio.h>
int pri(int);
int a;
int res;


int main()
{
printf("enter the value of a:");
scanf("%d",&a);
res=pri(a);
printf("%d\n",res);
if(res==0)
{
printf("it is not a prime number");
}
else
printf("it is a prime number");
}


int pri(int a)
{
int i=2;
for(i;i<=a/2;i++)
{
if(a%i==0)
{
res=0;
}
else
res=1;
return res;
}
}