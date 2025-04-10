#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,n;

	clrscr();
	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		k=65;
		if(i%2==0)
		{
			for(j=1; j<=i; j++)
			{
				printf(" %c ",k);
				k++;
			}
		}
		else
		{
			for(j=1; j<=i; j++)
			{
				printf(" %d ",j);
			}
		}
	printf("\n");
	}
	getch();
}