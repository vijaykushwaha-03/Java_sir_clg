#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	for(i=65,j=97;i<=91,j<= 122;i++,j++)
	{
		printf("\n\t %c %d",i,i);
		printf(" \t %c %d",j,j);
		}
	getch();
}