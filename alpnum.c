#include<stdio.h>
void main( )
{
char ch;
printf("enter the character:");
scanf("%c",&ch);
if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
printf("it is a alphabet");
else if(ch>='0'&& ch<='9')
printf("it is a number");
else 
printf("it is a special character");
}