#include<stdio.h>
#include<conio.h>

struct  employe
{
	int id;
	 long bas;
	double da,hra,con,med,tra,gs;
	char name[20];
};

void main()
{
	struct employe emp;

	clrscr();

	// Read
	printf("\n\n\t Enter Name of Employee =>");
	gets(emp.name);

	printf("\n\n\t Enter employee id ");
	scanf("%d",&emp.id);

	printf("\n\n\t Enter Basic salary of employee =>");
	scanf("%d",&emp.bas);

	// calculation

	emp.da = emp.bas * 0.10;
	emp.hra = emp.bas * 0.08;
	emp.con = emp.bas * 0.05;
	emp.med = emp.bas * 0.10;
	emp.tra = emp.bas * 0.05;

	emp.gs = emp.bas + emp.da + emp.hra + emp.con + emp.med + emp.tra;

	// Print

	printf("\n\n\t Employe information is....");
	printf("\n\t----------------------------------------");

	printf("\n EmpID  EMP_Name  BASIC_SAL  DA  HRA  CONVETANCE MEDICAL Travel GROSS_PAY");
	printf("\n   %d    %s    %ld    %lf    %lf    %lf    %lf    %lf    %lf ",emp.id,emp.name,emp.bas,emp.da,emp.hra,emp.con,emp.med,emp.tra,emp.gs);


	getch();
}