#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;

	clrscr();

	printf("\n\n\t Enter Number to Print table =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{         clrscr();
		for(j=1; j<=10; j++)
		{
			printf("\n\n\t %d * %d = %d ",i,j,i*j);
		}
		getch();
	 }
	getch();
}