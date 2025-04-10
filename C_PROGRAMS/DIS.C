#include<stdio.h>
#include<conio.h>

void main()
{
    long int km,meter,cm,foot,inch;
    // float foot,inch;

      clrscr();
      printf("\n\n\tEneter the KM==>");
      scanf("%ld",&km);

      meter=km*1000;
      cm=meter*100;
      inch=cm*0.39;
      foot=inch*12;

       printf("\n\n\tMeter=>%ld",meter);
	printf("\n\n\tCM==>%ld",cm);
	 printf("\n\n\tFoot==>%ld",inch);
	  printf("\n\n\tInch==>%ld",foot);




     getch();
}
