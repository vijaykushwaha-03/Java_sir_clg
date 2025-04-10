#include<stdio.h>
#include<conio.h>

void rev();

void rev(int n)
{
	int rev=0,rem;

	clrscr();

	printf("\n\n\t Before reverse number => %d",n);

	while ( n > 0)
	{
	     rem = n % 10;
	     rev = ( rev * 10 ) + rem;
	     n = n/10;
	}

	printf("\n\n\t After revers is => %d",rev);

	getch();
	
}

void main()
{
	int n;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	rev(n);

	getch();
}