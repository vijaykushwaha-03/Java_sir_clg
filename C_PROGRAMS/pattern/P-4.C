#include<stdio.h>
#include<conio.h>

void main()
{
	int i,st,ed,sum;

	clrscr();

	printf("\n\n\t Enter Starting number =>");
	scanf("%d",&st);

	printf("\n\n\t Enter Ending number =>");
	scanf("%d",&ed);

	for(i=st; i<=ed; i++)
	{
		if(i%7==0)
		{
			sum = sum+i;
			printf(" %d",i);
		}
	}

	printf(" Sum is => %d",sum);

	getch();
}