#include<stdio.h>
#include<conio.h>

void main()
{
	int no,rem,sum=0;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&no);

	while(no>0)
	{
		rem= no%10;
		printf("%d +",rem);
		sum = sum + rem;
		no = no / 10;
	}
	printf("\n\n\t Sum of digit ==> %d",sum);
	getch();
}