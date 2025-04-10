#include<stdio.h>
#include<conio.h>
#define PI 3.14

void aoc();

void aoc()
{
	float r,ci;

	clrscr();

	printf("\n\n\t Enter Radius of area =>");
	scanf("%f",&r);

	ci = PI * r * r;

	printf("\n\n\t Area of Circle is %.2f",ci);

	getch();
}

void main()
{
	clrscr();

	 aoc();

	getch();
}