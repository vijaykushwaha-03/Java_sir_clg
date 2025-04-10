		    // arry lenth using function
#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
	char str[50];
	int len;
	clrscr();

	printf("\n\n\t Enter string =>");
	gets(str);

	len = strlen(str);

       //	puts(str);
	printf("\n\n\t string is => %s",str);
	printf("\n\n\t string length is => %d",len);

	getch();
}