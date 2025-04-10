#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name[20];

	clrscr();

	printf("\n\n\t Enter name =>");
	scanf(" %s",name);

	printf("\n\n\r name is => %s",name);

	printf("\n\n\t Revese string is => %s",strrev(name));

	getch();

}