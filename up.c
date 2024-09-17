#include<stdio.h>
void main( )
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if (ch>='a'&&ch<='z')
printf("it is a lower case");
else if (ch>='A'&&ch<='Z')
printf("it is a upper case");
}