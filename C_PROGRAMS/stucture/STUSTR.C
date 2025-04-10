#include<stdio.h>
#include<conio.h>

typedef struct student
{
	char name[20];
	float avg;
	int roll,m1,m2,m3,tt;
}stu;

void main()
{

	stu s[50];
	int i,n;
	clrscr();

	printf("\n\n\t Enter how many stu ");
	scanf("%d",&n);


	// Read
	for(i=0; i<n; i++)
	{

	printf("\n\n\t  Enter name =>");
	flushall();
	gets(s[i].name);

	printf("\n\n\t Enter rollno =>");
	scanf("%d",&s[i].roll);

	printf("\n\n\t Enter Marks-1 =>");
	scanf("%d",&s[i].m1);

	printf("\n\n\t Enter Marks-2 =>");
	scanf("%d",&s[i].m2);

	printf("\n\n\t Enter Marks-3 =>");
	scanf("%d",&s[i].m3);

	s[i].tt = s[i].m1 + s[i].m2 + s[i].m3;
	s[i].avg = s[i].tt / 3;
	}

	printf("\n\n\n\n\t stu inforamtion...");
	printf("\n\t----------------------------");
	printf("\n\t NAME\t ROLL\t MAR-1\t MAR-2\ MAR-3\t TOTAL\t AVG");

	for(i=0; i<n; i++)
	{

	printf("\n\t %s \t%d \t%d \t%d \t%d \t%d \t%.2f",s[i].name,s[i].roll,s[i].m1,s[i].m2,s[i].m3,s[i].tt,s[i].avg);

	}
	getch();
}
