#include<stdio.h>
#include<conio.h>

void linear(int a[],int n);
void bab(int a[],int n);

void main()
{
	int a[100],n,i;
	clrscr();

	printf("\n\n\t Enter size of Array =>");
	scanf("%d",&n);

	// Read

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter number %d => ",i+1);
		scanf("%d",&a[i]);
	}

       //	linear(a,n);
	bab(a,n);

	getch();


}

void bab(int a[],int n)
{

	int tmp=0,j,i;

	printf("\n\n\t Before sorting ");

	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}

	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if( a[i] > a[j])
			{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			}
		}
	}

	printf("\n\n\t After sorting ");

	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}

}
void linear(int a[],int n)
{

	//write
	int i,key,flag=0;
	char ch;

	do
	{
	clrscr();
	for(i=0; i<n; i++)
	{
		printf("\n %d",a[i]);
	}

	printf("\n\n\t Enter number to search =>");
	scanf("%d",&key);

	for(i=0; i<n; i++)
	{
		if ( a[i] == key )
		{
			flag = 1;
			printf("\n\n\t %d found at position = %d",key,i+1);
		}
	}

	if(flag == 0 )
	{
		printf("\n\n\t %d not found ",key);
	}

	printf("\n\n\t U still search ....=>");
	scanf(" %s",&ch);

	}while(ch == 'y' || ch == 'Y');

}