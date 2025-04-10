#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k=65;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		k=65;
		for(j=1;j<=i; j++)
		{
			printf(" %c ",k);
			k++;

		}
	printf("\n");
	}

	getch();
}