//function
#include<stdio.h>
#include<conio.h>

void add();
void sub();    //define
void mul();
void div();


void main()
{
clrscr();
	add();
	sub();
	mul();
	div();
getch();
}
void add()
{
	int a,b,c;
	printf("\n\t addition function.....\n");
	printf("\n\t enter two value ==>");
	scanf("%d %d",&a,&b);
	c = a+b;
	printf("\n\t addition of values is ==>%d\n",c);

}

void sub()
{
	int a,b,c;
	printf("\n\t\n subtraction function.....\n");
	printf("\n\t enter two value ==>");
	scanf("%d %d",&a,&b);
	c = a-b;
	printf("\n\t subtraction of values is ==>%d\n",c);

}

void mul()
{
	int a,b,c;
	printf("\n\t\n multipication function.....\n");
	printf("\n\t enter two value ==>");
	scanf("%d %d",&a,&b);
	c = a*b;
	printf("\n\t multipication of values is ==>%d\n",c);

}

void div()
{
	int a,b,c;
	printf("\n\t\n div function.....\n");
	printf("\n\t enter two value ==>");
	scanf("%d %d",&a,&b);
	c = a%b;
	printf("\n\t div of values is ==>%d\n",c);

}
