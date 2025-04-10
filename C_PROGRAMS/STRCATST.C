		    // arry lenth using function
#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
	char str1[50], str2[50];
	int len;
	clrscr();

	printf("\n\n\t Enter string 1 =>");
	gets(str1);
	printf("\n\n\t Enter string 2 =>");
	gets(str2);

      // never use st1 = str;
     //  strcpy(str2,str1);  // str1 sve str2
   //    strrev(str1);

	strcat(str1," ");  // space
	strcat(str1,str2);

       // puts(str);
	printf("\n\n\t string 1 is => %s",str1);
     //	printf("\n\n\t string 2 is => %s",str2);

	getch();
}