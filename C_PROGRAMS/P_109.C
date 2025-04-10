#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int i,n,sum=0,x;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	for(i=0; i<=n; i++)
	{
		x=pow(2,i);
		sum = sum+pow(2,i);
		printf("%d + ",x);
	}
	printf(" ==> %d",sum);
	getch();
}