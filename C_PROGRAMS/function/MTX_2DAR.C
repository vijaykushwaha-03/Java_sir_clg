#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10][10],n,r,c,i,j;

	clrscr();

	printf("\n\n\t Enter row and colum =>");
	scanf("%d,%d",&r,&c);

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" \n\n\t Enter value of A[%d][%d] =>",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n\n\t Matrix - 1 \n\n");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n\n");

	}

		printf("\n\n\t Transpose \n\n");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d ",a[j][i]);
		}
		printf("\n\n");

	}
	getch();
}