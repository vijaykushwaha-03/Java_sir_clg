#include<stdio.h>
#include<conio.h>

void main()
{
	int x[10],i,n,sum=0,st,ed;
	float avg=0;

	clrscr();
	printf("\n\n\t Enter size of arry ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\t Enter Enter Marks Between [0-100] x[%d] =>",i);
		scanf("%d",&x[i]);
	}

	  printf("\n\t Enter starting and ending point =>");
	  scanf("%d,%d",&st,&ed);

	for(i=st; i<=ed; i++)
	{
		printf("\n\n\t [%d]=>%d",i,x[i]);
		sum = sum + x[i] ;

	 }
	 avg = sum/(ed-st);

	 printf("\n\n\t Sum of Arry is => %d",sum);
	 printf("\n\n\t AVG of Arry is => %f",avg);

	 getch();
}