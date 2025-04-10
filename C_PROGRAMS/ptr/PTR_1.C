#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	int *p,*q;

	clrscr();

	a = 10;
	b = 20;

	p = &a;
	q = &b;

	printf("\n\n\t value of a => %d",a);
	printf("\n\n\t address of a => %u",&a);
	printf("\n\n\t value of p => %u",p);
	printf("\n\n\t value of p => %d",*p);
	printf("\n\n\t address of p => %u",&p);

	printf("\n\n\t");

	printf("\n\n\t value of b => %d",b);
	printf("\n\n\t value of q => %u",q);
	printf("\n\n\t value of q => %d",*q);
	printf("\n\n\t add of b => %u",&b);
	printf("\n\n\t add of q => %u",&q);

	getch();
}