#include<stdio.h>
#include<conio.h>

void prime();

void prime()
{
	int n;

	clrscr();

	printf("\n\n\t Enter number to check prime or not =>");
	scanf("%d",&n);

	if(n%2==0)
	{
		printf("\n\n\t %d is not  prime");
	}
	else
	{
		printf("\n\n\t %d is prime");
	}
	getch();
}

void main()
{
	clrscr();

	prime();

	getch();

}