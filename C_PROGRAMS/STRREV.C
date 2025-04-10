		    // arry lenth using function
#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
	char str1[50],tmp;
	int i,j,len;
	clrscr();

	printf("\n\n\t Enter string =>");
	gets(str1);

      // never use st1 = str;

     len =  strlen(str1);  // str1 sve str2
 
      //  strrev(str1);

       for(i=0; i<len; i++)
       {
	for(j=i+1; j<len; j++)
	{
		if(str1[i] > str1[j])
		{
			tmp = str1[i];
			str1[i] = str1[j];
			str1[j] = tmp;
		}
	}
	}


       // puts(str);
	printf("\n\n\t Sorting  is => %s",str1);
      //	printf("\n\n\t string 2 is => %s",tmp);

	getch();
}