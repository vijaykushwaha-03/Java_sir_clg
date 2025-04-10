//Factorial fun with arguments with return type

#include<stdio.h>
#include<conio.h>

//145=>1!+4!+5!=145

void Krishnamurti(int);
long int Factorial(int n); //1. fun define
void main()
{

	int no;

	clrscr();

	printf("\n\n\tEnter value==>");
	scanf("%d",&no);

	Krishnamurti(no);

	getch();
}
void Krishnamurti(int no)
{
	int tmp,rem;
	long int sum=0;
	tmp=no;
	while(no>0)
	{
		rem=no%10;
		sum=sum + Factorial(rem);//Fun call factorial which return fact
		printf("\n\n\t%d Factorial is ..%ld",rem,Factorial(rem));//2.call
		no=no/10;

	}
	printf("\n\n\tSum=>%ld",sum);
	if(tmp==sum)
	{
		printf("\n\n%d is a Krishnamurti NO...	",tmp);
	}
	else
	{
		printf("\n\n%d is NOT a Krishnamurti NO...	",tmp);
	}

}

long int Factorial(int n) //2. fun declare
{
	long int fact=1;
	int i;

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact; //fun call
}