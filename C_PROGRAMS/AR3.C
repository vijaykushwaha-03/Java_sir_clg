#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,x[30],key,flag=0;
	char ch;
	clrscr();

	printf("\n\t enter array number=>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\t enter value=>",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\t value is%d=>%d",i,x[i]);
	   }

	   flag=0;
	   printf("\n\tenter value u want to search=>");
	   scanf("%d",&key);
	   for(i=0;i<n;i++)
	   {
	   if(a[i]==key)
		{
			flag=1;
			printf("\n\t%d found..",key);
			break;
		}
	    }
	    if(flag=0)
	    {
		printf("\n\t%d not found..",key);
		}

		printf("\n\tdo want to search again[y/n]=>");
		scanf("%c",&ch);


	   getch();
}