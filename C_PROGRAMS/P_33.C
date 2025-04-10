#include<stdio.h>
#include<conio.h>

void main()
{
	int emp_id,level,ca,ea,perks,basic_sal;
	float tax,gross_sal,hra,net_sal;

	char name[20];

	clrscr();

	printf("\n\n\t Enter Employe ID =>");
	scanf("%d",&emp_id);

	printf("\n\n\t Enter Employe Name =>");
	scanf("%s",name);

	printf("\n\n\t Enter Level of EMP =>");
	scanf("%d",&level);

	printf("\n\n\t Enter basic salary =");
	scanf("%d",&basic_sal);

	switch (level)
	{
		case 1:
			ca = 1000 ;
			ea = 500 ;
			break;

		case 2:
			ca = 750 ;
			ea = 200 ;
			break;

		case 3:
			ca = 500 ;
			ea = 100 ;
			break;

		case 4:
			ca = 250 ;
			ea = 0 ;
			break;

		default:
			printf("\n\n\t Enter Level Between [1-4]");

		}
		perks = ca+ea;
		printf("\n\n\t Employe name is => %s",name);
		printf("\n\n\t Employe id is => %d",emp_id);
		printf("\n\n\t Employe perks is =>%d",perks);

		hra = basic_sal * 0.10;

		gross_sal = basic_sal + hra + perks;

		if ( gross_sal <= 2000 )
		{
			printf("\n\n\t no tex deductiom");
		}
		else if ( gross_sal > 2000 &&  gross_sal <= 4000 )
		{
			tax = gross_sal * 0.3;
		}
		else if ( gross_sal < 4000 && gross_sal <= 5000)
		{
			tax = gross_sal * 0.5;
		}
		else
		{
			tax = gross_sal * 0.8;
		}

		net_sal = gross_sal - tax;

		printf("\n\n\t employe basic sal is => %d",basic_sal);
		printf("\n\n\t employe gross sal is => %f",gross_sal);
		printf("\n\n\t employe net sal is => %f",net_sal);


	getch();
}