#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	float sum=0;

	clrscr();

	n=5;
	for(i=1; i<=n; i++)
	{
	 sum = sum + 1/(float)i;
	 printf(" 1/ %d +",i);
	 }
	 printf("==> %f",sum);

	getch();
}