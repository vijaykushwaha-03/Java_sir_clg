#include<stdio.h>
#include<conio.h>

void main()
{

	int i,n,tmp=0,j,a[50];

	clrscr();

	printf("\n\n\t Enter Size of Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter Height of %d =>",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0; i<n; i++)
	{

	    for(j=i+1; j<n; j++)
	    {
		if(a[i] > a[j])
		{
		    tmp = a[i];
		    a[i] = a[j];
		    a[j] = tmp;
		}
	    }

	}
	 printf("\n\n\t Assending order is ");

	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}

	getch();
}