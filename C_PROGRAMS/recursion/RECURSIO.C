#include<stdio.h>
#include<conio.h>

long int factorial(int n);//define

long int factorial(int n)//declare
{
	long int fact=1;
	if(n==1)
	{
		return fact;
	}
	else
	{
		fact=n*factorial(n-1);

	}
	return fact;
}
/*long int factorial(int n)
{

	if(n>=1)
		return n*factorial(n-1);
	else
		return 1;
}*/
void main()

{
	long int fact;
	int n;
	clrscr();
	printf("\n Enter Number :");
	scanf("%d",&n);


	printf("\n Factorial is %ld",factorial(n));

	getch();
}