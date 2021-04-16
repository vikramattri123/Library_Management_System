#include<header.h>
void topMessage(const char* Info,const char* Page_type)
{
	printf("\t\t\t-----------------------------------------------------------------------\n");	
    DisplayMessage(Info);
    printf("\n\t\t\t---------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\t %s\n\n",Page_type);
}