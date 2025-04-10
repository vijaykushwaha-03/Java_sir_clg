#include<stdio.h>
#include<conio.h>

void main()
{
	float h[50];
	int i,n;

	clrscr();

	printf("\n\n\t Enter Size of Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter Height of %d =>",i+1);
		scanf("%f",&h[i]);
	}
	printf("\n\n\t Height of user ");
	for(i=0; i<n; i++)
	{
		printf("\n\n\t Height of H[%d] is = %.2f ",i+1,h[i]);
	}
	getch();
}