#include<stdio.h>
#include<conio.h>

int fact(int n);
int krishna(int n);

void main()
{
	int n;
	clrscr();

      //	printf("\n\n\t Enter number =>");
      //	scanf("%d",n);


    //  printf("\n\n\t Factroial is => %d",fact(5));

	printf("\n\n\t sum of factroal is => %d",krishna(145));
	getch();
}

int fact(int n)
{
	int i,fac=1;

	for(i=1; i<=n; i++)
	{
		fac = fac * i;
	}

	return fac;
}

int krishna(int n)
{
	int rem,sum=0,tmp = 0;

	tmp = n;

	while(n > 0)
	{
		rem = n%10;
		sum = sum + fact(rem);
		n = n/10;
	}

	if(tmp == sum)
	{
		printf(" \n\n\t %d is Kirishna ",sum);
	}
	else
	{
		printf("\n\n\t %d is not krishna ",sum);
	}

	return sum;
}