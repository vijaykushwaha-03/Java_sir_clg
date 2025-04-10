#include<stdio.h>
#include<conio.h>

void main()
{

	int a = 10 ;

	int *ptr = &a;

	clrscr();


	printf("\n\n\t Address of a is %u",&a);
	printf("\n\n\t Address of PTR is %u",*ptr);

	printf("\n\n\t value is a %p ",ptr);


	// value is

	printf("\n\n\t  valu is = >%d",a);


	getch();

}