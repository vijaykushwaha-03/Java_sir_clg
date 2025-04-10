#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,k;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		for(j=i; j<=n; j++)
		{
			printf(" ");

		}
		for(k=1; k<=i; k++)
		{
			printf("* ");
		}
	printf("\n");
	}

	getch();
}