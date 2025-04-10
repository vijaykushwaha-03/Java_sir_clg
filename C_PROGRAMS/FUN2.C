//function with switch case
#include<stdio.h>
#include<conio.h>

void add();
void sub();    //define
void mul();
void div();


void main()
{
	char A;
clrscr();

	do
	{
	printf("\n\t a.addition..");
	printf("\n\t b.subtraction..");
	printf("\n\t c.multipication..");
	printf("\n\t d.division..");
	printf("\n\t e.exit....");

	printf("\n\tenter your choice==>");
	scanf("%c",&A);

	switch(A)
	{
	case 'a':
		add();
		break;
	case 'b':
		sub();
		break;
	case 'c':
		mul();
		break;
		case 'd':
		div();
		break;
	case 'e':
		exit(0);
	default :
		printf("\n\t not a right choice..");
}
	printf("\n\tdo you wnt contiune...");
	flushall();
	scanf(" %c",&A);
	}while(A!='e');
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
