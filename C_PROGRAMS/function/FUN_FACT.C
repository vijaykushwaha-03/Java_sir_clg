#include<stdio.h>
#include<conio.h>

void fact();

void fact()
{
	int  n,i,fac=1;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for ( i=1; i<=n; i++)
	{
		fac = fac * i;
	}

	printf("\n\n\t Factorial is => %d",fac);

	getch();

}
void main()
{

	clrscr();


	fact();
	getch();

}