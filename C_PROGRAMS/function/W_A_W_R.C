#include<stdio.h>
#include<conio.h>

int mul(int a,int b);
int div(int a,int b);

void main()
{
	int a,b;

	clrscr();

	printf("\n\n\t Enter number a and b =>");
	scanf("%d,%d",&a,&b);

	mul(a,b);
	printf("\n\n\t mul is => %d",mul(a,b));

	printf("\n\n\t  div is => %d",div(a,b));

	getch();
}

int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	int di ;

	di = a/b;

	return di;
 }

