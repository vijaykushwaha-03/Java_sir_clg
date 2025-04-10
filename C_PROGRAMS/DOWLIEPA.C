
#include<stdio.h>
#include<conio.h>

void main()
{
	int rev=0,no,rem,choice,tmp,i,flag=0,sum=0;
	char ch;

	clrscr();

	do
	{
	  printf("\n\n\t 1.Prime");
	  printf("\n\n\t 2.Amstrong");
	  printf("\n\n\t 3. reverse");
	  printf("\n\n\t 4.palindrom");
	  printf("\n\n\t 0.Exit");

	  printf("\n\n\t\t Enter Your choice => ");
	  scanf("%d",&choice);

	  switch(choice)
	  {
		case 1:
			printf("\n\n\t Enter No to check prime or not =>");
			scanf("%d",&no);

			for(i=2; i<=no/2; i++)
			{
				if(no%i==0)
				{

					flag=1;
					printf("\n\n\t %d is not a prime ",no);
					break;
				}
			}
			if(flag == 0)
			{
				printf("\n\n\t %d is prime no..",no);
			}

			break;

		case 2:

			printf("\n\n\t Enter Number =>");
			scanf("%d",&no);

			tmp = no;

			while(no>0)
			{
				rem = no%10;
				printf("%d + ",rem*rem*rem);
				sum = sum + (rem*rem*rem);
				no = no /10;
			}

			if(tmp==sum)
			{
				printf("\n\n\t %d is Amstrong",tmp);
			}
			else
			{
				printf("\n\n\t %d is Not Amstrong",tmp);
			}

			break;

		case 3:
			printf("\n\n\t Enter Number =>");
			scanf("%d",&no);

			while ( no>0)
			 {
				rem = no%10;
				rev = (rev*10) + rem;
				no = no/10;
			 }
			 printf("\n\n\t Revese no is => %d",rev);

			break;
		case 4:
			printf("\n\n\t Enter Number =>");
			scanf("%d",&no);

			tmp = no;

			while ( no>0)
			 {
				rem = no%10;
				rev = (rev*10) + rem;
				no = no/10;
			 }
		      //	 printf("\n\n\t Revese no is => %d",rev);

		      if(tmp == rev)
		      {
			printf("\n\n\t %d is palindrom..",tmp);
		      }
		      else
		      {
			printf("\n\n\t %d is not palindrom..",tmp);
		      }
			break;
		case 0:
			exit(0);

		defalut:
			printf("\n\n\t Enter valid choice ");

	    }     // switch

		printf("\n\n\t do you want process [ Y/N ] =>");
		flushall();
		ch=getchar();

	} while(ch=='Y' || ch=='y');

	    getch();

}