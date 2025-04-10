#include<stdio.h>
#include<conio.h>


void main()
{
	int n,i,a,b,c;

	clrscr();

	printf("\n\n\t Enter number ");
	scanf("%d",&n);

	a = 1;
	b = 2;

	printf(" %d %d ",a,b);

	for(i=1; i<n; i++)
	{
		c = a+b;
		printf(" %d",c);
		a = b;
		b = c;
	}
	getch();
}
	 \
