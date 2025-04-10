#include<stdio.h>
#include<conio.h>

void main()
{
	char op;
	int a,b,ans;
	clrscr();

	printf("\n\n\t Enter Two Values =>");
	scanf("%d,%d",&a,&b);

	printf("\n\n\t Enter Operator =");
	scanf(" %c",&op);

	switch(op)
	{
		case '+':

			ans = a+b;
			printf("\n\n\t Sum is => %d",ans);
			break;

		case '-':
			ans = a-b;
			printf("\n\n\t Subtraction is => %d",ans);
			break;
		case '*':
			ans = a*b;
			printf("\n\n\t Multiplication is => %d",ans);
			break;
		case '/':

			ans = a/b;
			printf("\n\n\t division is => %d",ans);
			break;

			default:
			printf("Enter valid Operator  ");
	     }

	     getch();
	}