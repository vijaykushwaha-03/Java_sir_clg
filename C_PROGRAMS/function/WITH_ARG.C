#include<stdio.h>
#include<conio.h>
#define PI 3.14

void cir(float);

void cir(float r)       // with argu
{
	float ac;
	clrscr();

	ac = PI * r * r;

	printf("\n\n\t Area of Circle is %.2f",ac);
	getch();


}

void main()
{
	float r ;

	clrscr();

	printf("\n\n\t Enter Radius =>") ;
	scanf("%f",&r);

	cir(r);  // call function

	getch();
}