#include<header.h>  
void welcomePage()
{
	MenuPage("************ Home Page ***********");
	char select;
    printf("\n");
    printf("\n\t\t\t\t **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t\t        =                   TO                      =");
    printf("\n\t\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Enter any (y/n) to continue.... ");
    scanf("%c",&select);
    if(select=='Y' || select=='y')
    {
    	system("cls");
    	Heading("********* Menu Page **********");
	}
    else if(select =='n' || select=='N')
    {
    	printf("******************************  Thank you   *****************************");
	}
	else
	{
		char select;
		printf("******************************  You Press Wrong Key, press Enter  (y/n) *****************************");
		    if(select=='Y' || select=='y')
    {
    	system("cls");
    	Heading("********* Menu Page **********");
	}
    else if(select =='n' || select=='N')
    {
    	printf("\n\t\t\t\t******************************  Thank you   *****************************");
	}
	else
	{
		system("cls");
	    welcomePage();
	}
	}
    getch();
}