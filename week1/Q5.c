#include<stdio.h>
int main()
  {
	char ch;
	
	 printf("Enter Any Character :");
	 scanf("%c",&ch);
	 
	 if (ch>=97 && ch<=122)
	 {
	 	printf("'%c'is alphabet.",ch);
	 }
	 else if(ch>=48 && ch<=57)
	 {
	 	printf("'%c'is digit.",ch);
	 }
    else
    {
	
   	Printf("'%c'is special character.", ch);
   }
   return 0;
}
