#include<stdio.h>
#include<conio.h>

typedef struct product
{
	char name[20],pid[20];
	int qty;
	float tt,price;
}pro;

void main()
{
	 pro p[40];
	int i,n;
	float pr;

	clrscr();

	printf("\n\n\t Enter book size ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{

	printf("\n\n\t  Enter book ID =>");
	flushall();
	gets(p[i].pid);

	printf("\n\n\t Enter Book name =>");
	gets(p[i].name);


	printf("\n\n\t Enter book price =>");
	scanf("%f",&pr);
	p[i].price=pr;

	printf("\n\n\t Enter book qty =>");
	scanf("%d",&p[i].qty);

	p[i].tt = pr * p[i].qty;

	}

	printf("\n\n\t product inforamtion...");
	printf("\n\t----------------------------");

	for(i=0; i<n; i++)
	{

	printf("\n\t PID\tNAME\tPRICE\tQTY\tTOTAL");
	printf("\n\t %s\t%s\t%.2f\t%d\t%.2f",p[i].pid,p[i].name,pr,p[i].qty,p[i].tt);
	}
	 pr =0;

	for(i=0; i<n; i++)
	{
		pr = p[i].tt + pr;
	}
	printf("\n\n\t\t Total price is  %.2f",pr);


	getch();
}
