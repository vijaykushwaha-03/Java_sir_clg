		    // arry lenth using function
#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
	char str1[50],tmp[50], str2[50];
	int len;
	clrscr();

	printf("\n\n\t Enter string 1 =>");
	gets(str1);
	printf("\n\n\t Enter string 2 =>");
	gets(str2);


	strcpy(tmp,strstr(str1,str2));
	printf("\n\n\t STRSTR ==>");
	puts(tmp);


	getch();
}