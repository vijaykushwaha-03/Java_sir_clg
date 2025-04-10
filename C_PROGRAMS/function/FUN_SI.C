#include<stdio.h>
#include<conio.h>

void simple(int,long int,double);

void simple(int n,long int p,double r)
{
	double si;
       //	clrscr();

	si =  ( p * r * n ) / 100;

	printf("\n\n\t Simple interst is %.2lf",si);

      //	getch();
}

void main()
{
	int n;
	long int p;
	double r;

	clrscr();

	printf("\n\n\t Enter principle Amount =>");
	scanf("%ld",&p);

	printf("\n\n\t Enter rate of intrest =>");
	scanf("%lf",&r);

	printf("\n\n\t Enter number of year =>");
	scanf("%d",&n);

	simple(p,r,n);

	getch();
}