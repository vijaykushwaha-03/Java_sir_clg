#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,choice;
	char ch;

	clrscr();

	do
	{
	  printf("\n\n\t 1.Add");
	  printf("\n\n\t 2.Sub");
	  printf("\n\n\t 3.Mul");
	  printf("\n\n\t 0.Exit");

	  printf("\n\n\t\t Enter Your choice => ");
	  scanf("%d",&choice);

	  switch(choice)
	  {
		case 1:
			printf("\n\n\t\ Enter two number => ");
			scanf("%d %d",&a,&b);

			printf("\n\n\t %d + %d = %d",a,b,a+b);
			break;

		case 2:
			printf("\n\n\t\ Enter two number => ");
			scanf("%d %d",&a,&b);

			printf("\n\n\t %d - %d = %d",a,b,a-b);
			break;

		case 3:
			printf("\n\n\t\ Enter two number => ");
			scanf("%d %d",&a,&b);

			printf("\n\n\t %d * %d = %d",a,b,a*b);
			break;

		case 0:
			exit(0);

		defalut:
			printf("\n\n\t Enter valid choice ");

	    }     // switch

		printf("\n\n\t do you want process [ Y/N ] =>");
		flushall();
		ch=getchar();

	} while(ch=='Y' || ch=='y');

	    getch();

}