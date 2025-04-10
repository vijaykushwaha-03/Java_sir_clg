#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,k,x=1;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		for(j=i; j<=n; j++)
		{
			printf(" %d ",x);
			x++;
		}

	printf("\n");
	}

	getch();
}