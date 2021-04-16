#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <locale.h>
#include<string.h>
struct Book
	{
		int Book_id;
		char Book_name[100];
		char Author_Name[100];
	    int Book_Pages;
	}Book;
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
void topMessage(const char* Info,const char* Page_type)
{
	printf("\t\t\t-----------------------------------------------------------------------\n");	
    DisplayMessage(Info);
    printf("\n\t\t\t---------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\t %s\n\n",Page_type);
    
}
void addBook(const char* Page_type)
{
	topMessage("Lovely Professional University Library Management System",Page_type);
    int chars,i,m,n,j;
    FILE *fp;
    fp=fopen("books.csv","w+");
    fprintf(fp,"Book_Id, Book_Name, Author_Name, Pages");
    printf("Enter the Book ID = ");
    scanf("%d",&Book.Book_id);
    printf("\nEnter Book Name = ");
    gets(Book.Book_name);
    printf("\nEnter Author Name = ");
    scanf("%s",Book.Author_Name);
    printf("\nEnter No of Pages = ");
    gets(Book.Book_Pages);
    for(i=0;i<1;i++){
 
    fprintf(fp,"\n%d",Book.Book_id);
 
    for(j=0;j<3;j++)
    {
        if(j==0)
        {
           fprintf(fp,",%s ",Book.Book_name);	
		}
		if(j==1)
		{
			fprintf(fp,",%s ",Book.Author_Name);
		}
		if(j==2)
		{
			fprintf(fp,",%d ",Book.Book_Pages);
		}
	}
    }
    fseek(fp,0,SEEK_END);
    printf("Number of items written to the file: %d\n", chars);
    printf("its working");
    fclose(fp);
    printf("done");
}
void Heading(const char* Page_type)
{
	int option;
	topMessage("Lovely Professional University Library Management System",Page_type);
	printf("\t\t 1.Add new book \n");
	printf("\t\t 2.View Book\n");
	printf("\t\t 3.Search Book\n");
	printf("\t\t 4.Delete Book\n");
	printf("\t\t 5.Exit\n");
    printf("\t\t Please Select an option.....  ");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{
			   system("cls");
			   addBook("************ add new book ************");	   
		    }
	}  
	
}
void MenuPage(const char* Page_type)
{
	topMessage("Lovely Professional University Library Management System",Page_type);
}
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
    printf("\n\n\n\t\t\t Enter any (y/n) to continue.... \n");
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
    getch();
}
int main()
{
	welcomePage();
	return 0;
}