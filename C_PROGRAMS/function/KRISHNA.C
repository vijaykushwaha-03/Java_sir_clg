#include<stdio.h>
#include<conio.h>


int fact(int n);
int sumofdigit(int n);

void main()
{
	int n,x;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

    //   x = sumofdigit(n);

     //	x = sumofdigit(55);
      //	printf("\n\n\t Sum of digit => %d",x);
       //	printf("\n\n\t Sum of digit => %d",sumofdigit(n));

       sumofdigit(n);

	getch();
}

int fact(int n)
{
	int i,fac = 1;
	clrscr();

	for(i=1; i<=n; i++)
	{
		fac = fac * i;

	}

      //	printf("\n\n\t Factorial is %d",fac);

      return fac;
}

int sumofdigit(int n)
{

	int tmp ,rem,sum = 0;
	 clrscr();
	  tmp = n ;

       while(n > 0)
       {
		rem = n % 10;
		printf(" %d ",rem);
	     //	sum = sum + rem;

	       sum = sum + fact(rem);
		n = n/10;
	 }

	 if(tmp == sum)
	 {
		printf("\n\n\t Is Krishna murti");
	 }
	 else
	 {
		printf("\n\n\t Not krishna ");
	 }

   //	 printf("\n\n\t Sum of digit is => %d",sum);
      //	 getch();
	//  return sum;

}
