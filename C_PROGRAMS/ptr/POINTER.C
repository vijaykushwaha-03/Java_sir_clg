#include<stdio.h>
#include<conio.h>

void main()
{
	int a,*pt;

	clrscr();

	printf("\n\n\t Enter value =>");
	scanf("%d",&a);

	 *pt = a;

	printf("\n\n\t Address of a => %u",&a);
	printf("\n\n\t value of a => %d",a);
	printf("\n\n\t ptr value of a => %d",*pt&a);
	getch();
}