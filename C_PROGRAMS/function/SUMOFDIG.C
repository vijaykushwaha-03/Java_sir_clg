#include<stdio.h>
#include<conio.h>

void sumofdigit(int n);
void fact(int n);

void main()
{
	int n;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	sumofdigit(n);
	fact(n);
	getch();
}

void fact(int n)
{
	int i,fac = 1;
	clrscr();

	for(i=1; i<n; i++)
	{
		fac = fac * i;

	}

	printf("\n\n\t Factorial is %d",fac);

}
void sumofdigit(int n)
{

	int rem,sum = 0;
	 clrscr();

       while(n > 0)
       {
		rem = n % 10;
		printf(" %d +",rem);
		sum = sum + rem;

		n = n/10;
	 }

	 printf("\n\n\t Sum of digit is => %d",sum);
	 getch();

}
