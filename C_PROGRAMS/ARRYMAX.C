#include<stdio.h>
#include<conio.h>

void main()
{

	int i,n,tmp=0,j,a[50],max,min;

	clrscr();

	printf("\n\n\t Enter Size of Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter age of %d =>",i+1);
		scanf("%d",&a[i]);
	}
	max= a[0];
	min = a[0];
	printf("\n\n\t age of user ");
	for(i=0; i<n; i++)
	{
		printf("\n\n\t age of a[%d] is = %d ",i,a[i]);

	    if ( a[i] > max )
	    {
		max = a[i];
	    }
	    if ( a[i] < min )
	    {
		min = a[i];
	    }
	}

		printf("\n\n\t Maximum number of is => %d",max);
		printf("\n\n\t Minimum number of is => %d",min);
	getch();
}