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
	//while(n>
	printf(" %d %d ",a,b);
	for(i=1;i<n;i++)
	{
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;

	}
	getch();

}