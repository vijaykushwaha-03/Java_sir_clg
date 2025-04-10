#include<stdio.h>
#include<conio.h>

void main()
{
	int sum=0,i,n;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
	  sum = sum+i;
	  printf(" %d +",i);
	}
	printf(" ==> %d",sum);
	getch();
}