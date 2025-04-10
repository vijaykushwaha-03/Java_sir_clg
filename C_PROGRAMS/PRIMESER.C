#include<stdio.h>
#include<conio.h>

void main()
{
	int j, i,n,flag=0;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);
	for(j=2; j<=n; j++)
	{
		flag=0;
		for(i=2; i<=j/2; i++)
		{
			if(j%i == 0)
			{
			flag = 1;
			break;
			}
		}

		if(flag == 0)
		{
			printf(" %d ",j);
		}
	}
	getch();
}

