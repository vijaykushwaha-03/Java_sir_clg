#include<stdio.h>
#include<conio.h>

void main()
{
	int x[50],i,n,sum=0;
	float avg=0;

	clrscr();

	printf("\n\n\t Enter number of Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\t Enter size of x[%d] =>",i);
		scanf("%d",&x[i]);
	}
	printf("\n\n\t Array elements are....\n");

	for(i=0; i<n; i++)
	{
		sum = sum + x[i];

	 }
		avg = sum/n;

	 printf("\n\n\t Sum of Arry is => %d",sum);
	 printf("\n\n\t AVG of Arry is => %f",avg);
	getch();
}