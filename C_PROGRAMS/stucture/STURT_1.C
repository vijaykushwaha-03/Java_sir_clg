#include<stdio.h>
#include<conio.h>

struct student
{
	int m1,m2,m3,total,rollno;
	char name[20];
};

void main()
{
	struct student stu;

	clrscr();

	// Read

	printf("\n\n\t Enter Name of student =>");
	gets(stu.name);

	printf("\n\n\t Enter Rollno =>");
	scanf("%d",&stu.rollno);

	printf("\n\n\t Enter marks-1 =>");
	scanf("%d",&stu.m1);

	printf("\n\n\t Enter marks-2 =>");
	scanf("%d",&stu.m2);

	printf("\n\n\t Enter marks-3 =>");
	scanf("%d",&stu.m3);

	stu.total = stu.m1 + stu.m2 + stu.m3;

	// Print

	printf("\n\n\t\t studentn informstion is...");
	printf("\n\t--------------------------------------");

	printf("\n\t Name\t Rollno\t Mark-1\t Mark-2\t Mark-3  Total \n");
	printf("\n\t %s\t %d\t %d\t %d\t %d\t %d",stu.name,stu.rollno,stu.m1,stu.m2,stu.m3,stu.total);



	getch();
}