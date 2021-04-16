#include<header.h>
void DisplayMessage(const char* Info)
{
   int Start=0;
   int end = 0;
   end =(78 - strlen(Info))/2;
   printf("\t\t\t");
   for(Start=0;Start<end;Start++)
   {
   	printf(" ");
   }
   printf("%s",Info);  	
}