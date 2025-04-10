#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{

	int x, i,n, sum=0;
	
	clrscr();

	printf("\n\n\t ENter number =>");
	scanf("%d",&n);

	for(i=0; i<=n; i++)
	{
	 x = pow(i,i);
		sum = sum+pow(i,i);
		printf(" %d",x);
	}

	printf(" ==> %d",sum);
	getch();

}