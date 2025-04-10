#include<stdio.h>
#include<conio.h>

void main()
{
	int n,a,b,i,c;
	clrscr();
	printf("\n ENter NUmber:");
	scanf("%d",&n);
	a=1;
	b=1;
	c=a+b;
	printf(" %d %d ",a,b);
	do
	{
		c=a+b;
		printf(" %d ",c)
		a=b;
		b=c;


	}while(c<=n);
	getch();

}