#include<stdio.h>
#include<conio.h>
#define PI 3.14

void simple(double);

void simple(double r)
{
	double aos;
       //	clrscr();

	aos =  ( PI * r * r * 4 ) / 3;

	printf("\n\n\t Area of sphare is => %.2lf",aos);

      //	getch();
}

void main()
{
	double r;

	clrscr();

	printf("\n\n\t Enter Radius =>");
	scanf("%lf",&r);

	simple(r);

	getch();
}