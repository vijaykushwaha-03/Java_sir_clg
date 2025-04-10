#include<stdio.h>
#include<conio.h>


int fact(int n);

void main()
{
	int n,x;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

       x = sumofdigit(n);

     //	x = sumofdigit(55);
	printf("\n\n\t Sum of digit => %d",x);
	printf("\n\n\t Sum of digit => %d",sumofdigit(n));
	getch();
}

int sumofdigit(int n)
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

   //	 printf("\n\n\t Sum of digit is => %d",sum);
      //	 getch();
	  return sum;

}
