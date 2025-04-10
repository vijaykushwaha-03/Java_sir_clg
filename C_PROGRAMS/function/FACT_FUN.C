#include<stdio.h>
#include<conio.h>

void fact(int n);

void main()
{
	int n;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	fact(n);
	getch();
}

void fact(int n)
{
	int i,fac = 1;
	clrscr();

	for(i=1; i<=n; i++)
	{
		fac = fac * i;

	}

	printf("\n\n\t Factorial is %d",fac);

}
