#include<stdio.h>
#include<conio.h>

void main()
{

	int i,n,j,a[50],cnt1=0,cnt2=0;

	clrscr();

	printf("\n\n\t Enter Size of student Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter marks of student %d =>",i);
		scanf("%d",&a[i]);
	}

      // 	printf("\n\n\t age of user ");

	for(i=0; i<n; i++)
	{


	    if ( a[i] >= 30 )
	      {

		cnt1 ++;
			printf("\n\n\t Pass student mark = %d ",a[i]);
	      }
	      else
	      {

		cnt2 ++;
		printf("\n\n\t  fail student mark = %d ",a[i]);
	       }


	}

		printf("\n\n\t pass student => %d",cnt1);
		printf("\n\n\t fail student => %d",cnt2);

	getch();
}