#include<stdio.h>
#include<conio.h>

void main()
{
	int i,no,rem,rev=0,tmp;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&no);
	  tmp = no;

	while(no>0)
	{
		rem= no%10;
		rev = rev * 10 + rem ;
		printf("\n\n\t Rem => %d \t rev => %d",rem,rev);
		no = no / 10;
	}

	printf("\n\n\t Revese of %d is %d ",tmp,rev);


	if(tmp==rev)
	{
		printf("\n\n\t %d is palindrom ",tmp);
	}
	else
	{
		printf("\n\n\t %d is not palindrom ",tmp);
	}
	getch();
}