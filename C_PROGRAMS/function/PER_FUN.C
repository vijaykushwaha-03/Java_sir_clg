#include<stdio.h>
#include<conio.h>

void per();

void per(int a)
{
	int i,sum=0;

	clrscr();

	for ( i=1; i<a; i++)
	{
		if( a%i == 0 )
		{
		   sum = sum + i;
		}
	}

	if( a == sum )
	{
		printf(" \n\n\t %d is perfect ",a);
	}
	else
	{
		printf("\n\n\t %d is not perfect",a);
	}

	getch();
}

void main()
{
	int a;

	clrscr();

	printf("\n\n\t Enter number to find perfect or not =>");
	scanf("%d",&a);

	per(a);

	getch();
}