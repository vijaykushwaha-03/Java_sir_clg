#include<stdio.h>
#include<conio.h>

typedef struct student
{
	char name[20];
	int sid;
	struct DOB
	{
		int dd,mm,yy;
	}d;
}stu;

void main()
{
	 stu s[50];
	int n,i;
	clrscr();

	printf("\n\n\t Enter size of stu  =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	
		{
		printf("\n\n\t Enter S ID ");
		scanf("%d",&s[i].sid);

		printf("\n\n\t Enter Name ");
		flushall();
		scanf("%s",s[i].name);

		printf("\n\n\t Enter DOB [dd-mm-yy]");
		scanf("%d-%d-%d",&s[i].d.dd,&s[i].d.mm,&s[i].d.yy);

		}

	printf("\n\n\t student info ");
	printf("\n\t --------------------------------");
	printf("\n\n\t SID\tSNAME\tDD-MM-YY");

	for(i=0; i<n; i++)
		{
			printf("\n\t %d\t%s\t%d-%d-%d",s[i].sid,s[i].name,s[i].d.dd,s[i].d.mm,s[i].d.yy);
		}

	getch();
}