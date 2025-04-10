#include<stdio.h>
#include<conio.h>

void main()
{
	int no,rem,tmp,sum=0;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&no);
	tmp = no;

	while(no>0)
	{
		rem= no%10;
		printf("%d +",rem*rem*rem);
		sum = sum +( rem*rem*rem);
		no = no / 10;
	}

	if(tmp==sum)
	{
		printf("\n\n\t %d is Armstrong ",tmp);
	}
	else
	{
		printf("\n\n\t %d is not Armstrong ",tmp);
	}
	getch();
}