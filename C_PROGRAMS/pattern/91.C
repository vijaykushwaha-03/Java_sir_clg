#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k=97;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		for(j=1;j<=3; j++)
		{
			printf("%c ",k);
			k++;

		}
	printf("\n");
	}

	getch();
}