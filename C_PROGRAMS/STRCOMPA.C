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


	/*

	if( strcmp(str1,str2) == 0 )
	{
		printf("\n\n\t Both string equal ");
	}
	else
	{
		printf("\n\n\t not equal ");
	}
	  */

		// Case in censetive
	  /*
	if( stricmp(str1,str2) == 0 )
	{
		printf("\n\n\t Both string equal ");
	}
	else
	{
		printf("\n\n\t not equal ");
	}

	*/
	if( strcmpi(str1,str2) == 0 )
	{
		printf("\n\n\t Both string equal ");
	}
	else
	{
		printf("\n\n\t not equal ");
	}


	getch();
}