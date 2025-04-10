#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,count=0;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
	   if(n%i == 0)
	   {

		count++;

	   }
	}

	if(count == 2)
	{
		printf("\n\n\t %d is Prime no..",n);
	}
	else
	{
		printf("\n\n\t %d is Not prime no..",n);
	}
	getch();
}

