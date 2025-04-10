#include<stdio.h>
#include<conio.h>

void main()
{
	int x[50],i,n;

	clrscr();

	printf("\n\n\t Enter number of Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\t Enter size of x[%d] =>",i);
		scanf("%d",&x[i]);
	}
	printf("\n\n\t Array elements are....\n");

	for(i=n-1; i>=0; i--)
	{
		printf(" \n\t size of x[%d] => %d",i,x[i]);
	 }
	getch();
}