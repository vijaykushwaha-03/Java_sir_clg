
#include<stdio.h>
#include<conio.h>

void main()
{
	long int i,n,factorial=1;
	clrscr();

	printf("\n\n\t  Enter N :");
	scanf("%ld",&n);
	while(i<=n)
	{
		factorial=factorial*i;
		printf("\n%d",factorial);
		i++;
	}
	clrscr();

	getch();
}
