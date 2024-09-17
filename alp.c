#include<stdio.h>
void main( )
{
char ch;
printf("enter the alphabet:");
scanf("%c",&ch);
if (ch>='a'&&ch<='z')
printf("character is an alphabet");
else
printf("character is not an alphabet");
}
