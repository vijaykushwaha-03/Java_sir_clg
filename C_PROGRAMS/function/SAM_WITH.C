#include<stdio.h>
#include<conio.h>

void max();

void max(int a,int b,int c)
{

	clrscr();



	if ( a < b && a < c)
	{
		printf(" \n\n\t %d A is min ",a);
	}
	else if ( b < a && b < c)
	{
		printf("\n\n\t %d B is min ",b);
	}
	else
	{
		printf("\n\n\t %d C is min ",c);
	}
	getch();
}

void main()
 {
	int a,b,c;

	clrscr();

	printf("\n\n\t Enter Three number => ");
	scanf("%d,%d,%d",&a,&b,&c);
	max(a,b,c);

	getch();

}