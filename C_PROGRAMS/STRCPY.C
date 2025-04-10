		    // arry lenth using function
#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
	char str1[50], str2[50];
	int len;
	clrscr();

	printf("\n\n\t Enter string =>");
	gets(str1);

      // never use st1 = str;
       strcpy(str2,str1);
       strrev(str1);

       if( strcmp(str1,str2) == 0);
       {
		printf(" \n\n\t Is palindom ");
       }
       else
       {
		printf("\n\n\t Not palindrom ");
       }

       //	puts(str);
      //	printf("\n\n\t string 1 is => %s",str1);
      //	printf("\n\n\t string 2 is => %s",str2);

	getch();
}