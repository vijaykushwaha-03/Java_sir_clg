#include<stdio.h>
#include<conio.h>

void add();
void sub();
void mul();
void div();

void  add()
{
	int a,b,c;
		   clrscr();
	printf("\n\n\t Substraction function......");

	printf("\n\t Enter A number =>");
	scanf("%d",&a);

	printf("\n\t Enter B number =>");
	scanf("%d",&b);


	c = a + b;

	printf("\n\n\t Addition is => %d",c);

}

void sub()
{
	int a,b,c;
		   clrscr();
	printf("\n\n\t Substraction function......");

	printf("\n\t Enter A number =>");
	scanf("%d",&a);

	printf("\n\t Enter B number =>");
	scanf("%d",&b);

	c = a - b;

	printf("\n\n\t Subtraction is => %d",c);

	getch();
 }

void mul()
{
	int a,b,c;
		   clrscr();
	printf("\n\n\t Multiplication function......");

	printf("\n\t Enter A number =>");
	scanf("%d",&a);

	printf("\n\t Enter B number =>");
	scanf("%d",&b);

	c = a * b;

	printf("\n\n\t Multipliction is => %d",c);

	getch();
 }

void div()
{
	int a,b,c;
		   clrscr();
	printf("\n\n\t Division function......");

	printf("\n\t Enter A number =>");
	scanf("%d",&a);

	printf("\n\t Enter B number =>");
	scanf("%d",&b);

	c = a / b;

	printf("\n\n\t Division is => %d",c);

	getch();
 }


void main()
{

	int n;
	char ch;

	clrscr();

	do
	{
	printf("\n\n\t 1. Addition");
	printf("\n\n\t 2. Sub");
	printf("\n\n\t 3. Mul");
	printf("\n\n\t 4. Div");

	printf("\n\n\tEnter your choice => ");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mul();
			break;
		case 4:
			div();
			break;

		default:
			printf("\n\n\t Enter valide number ");
	}

	printf("\n\n\t Do you want to continue ");
	flushall();
    //	gets(ch);
	scanf(" %c",&ch);
	clrscr();
	}while(ch == 'y' || ch == 'Y' );

	getch();
}