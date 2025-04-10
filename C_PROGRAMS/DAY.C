#include<stdio.h>
#include<conio.h>

void main()
{
	int day;
	clrscr();

	printf("\n\n\t Enter Day between [1-7] =");
	scanf("%d",&day);

	switch(day)
	{
		case 1:
			printf("\n\n\t Monday");
			break;
		case 2:
			printf("\n\n\t Tusday");
			break;
		case 3:
			printf("\n\n\t Wednesday");
			break;
		case 4:
			printf("\n\n\t Thurseday");
			break;
		case 5:
			printf("\n\n\t Friday");
			break;
		case 6:
			printf("\n\n\t Saturday");
			break;
		case 7:
			printf("\n\n\t Sunday");
			break;
		default:
			printf("Enter valid day ");
	     }

	     getch();
	}






