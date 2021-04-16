#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <locale.h>
#include<ctype.h>
#include<string.h>
struct Book
	{
		int Book_id;
		char Book_Subject[100];
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
void MenuPage(const char* Page_type)
{
	topMessage("Lovely Professional University Library Management System",Page_type);
}
void addBook(const char* Page_type)
{
	topMessage("Lovely Professional University Library Management System",Page_type);
    int chars,i,m,n,j;
	FILE *fp;
    fp=fopen("books.csv","a");
	printf("\t\t 1.Mathematics \n");
	printf("\t\t 2.English \n");
	printf("\t\t 3.Chemistry \n");
	printf("\t\t 4.Physics\n");
	printf("\t\t 5.Computer Science\n");
	int select;
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			{
			  strcpy(Book.Book_Subject,"Mathematics");
	          system("cls");
	          break;
			}
		case 2:
			{
	        strcpy(Book.Book_Subject,"English");
	          system("cls");
	          break;
			}
		case 3:
			{
			strcpy(Book.Book_Subject,"Chemistry");
			system("cls");
	          break;
			}
		case 4:
			{
			strcpy(Book.Book_Subject,"Physics");
	          system("cls");
	          break;
			}
		case 5:
			{
			strcpy(Book.Book_Subject,"Computer Science");
	          system("cls");
	          break;
			}
		default:
		{
					system("cls");
					addBook("************ add new book ************");
					break;
		}
				
	}
	MenuPage("************ add new book ************");
    int Value;
    printf("Select How many Books you ");
    scanf("%d",&Value);
    for(i=0;i<Value;i++)
	{

    for(j=1;j<6;j++)
    {
    	if(j==1)
    	{
     printf("Enter the Book ID = ");
     scanf("%d",&Book.Book_id);
     fprintf(fp,"\n%d",Book.Book_id);
		}
        if(j==2)
        {
        printf("\nEnter Book Name = ");
        scanf("%s",Book.Book_name);
//        scanf("%*[^\n]"); 
        for(int r=0;r<=strlen(Book.Book_name);r++)
        {
        	if(Book.Book_name[r]>=65 && Book.Book_name[r]<=90)
        	{
        		Book.Book_name[r]=Book.Book_name[r] + 32;
			}
		}
        fprintf(fp,",%s ",Book.Book_name);
		}
		if(j==3)
		{
        for(int r=0;r<=strlen(Book.Book_Subject);r++)
        {
        	if(Book.Book_Subject[r]>=65 && Book.Book_Subject[r]<=90)
        	{
        		Book.Book_Subject[r]=Book.Book_Subject[r]+32;
			}
		}			
			fprintf(fp,",%s ",Book.Book_Subject);
		}
		if(j==4)
		{
        printf("\nEnter No of Pages = ");
        scanf("%d",&Book.Book_Pages);
		fprintf(fp,",%d ",Book.Book_Pages);
		}
		if(j==5)
		{
		printf("\nEnter Author Name = ");
        scanf("%s",Book.Author_Name);
//        scanf("%*[^\n]"); 
        for(int r=0;r<=strlen(Book.Author_Name);r++)
        {
        	if(Book.Author_Name[r]>=65 && Book.Author_Name[r]<=90)
        	{
        		Book.Author_Name[r]=Book.Author_Name[r]+32;
			}
		}
		fprintf(fp,",%s ",Book.Author_Name);
		printf("\n");
		}
	}
    }
    printf("Number of items written to the file: %d\n", chars);
    printf("its working");
    fclose(fp);
    printf("done");
}
int viewBook(int argc,const char* Page_type) 
{ 
    FILE* inp; 
    inp = fopen("books.csv","r");
    char arr[100][50];			
    int i = 0; 
    while(1){ 
        char r = (char)fgetc(inp); 
        int k = 0; 
        while(r!=',' && !feof(inp)){	
            arr[i][k++] = r;		
            r = (char)fgetc(inp); 
        } 
        arr[i][k]=0;	  
        if(feof(inp)){		
            break; 
        } 
        i++; 
    } 
    int j; 
    for(j = 5;j<=i;j++){ 
    for(int v=0;v<6;v++)
    {
    	if(v==0)
    	{
        printf("%sBook Id = ",arr[j][v]);
		printf("\n");
        }
            	if(v==1)
    	{
        printf("%sBook Name = ",arr[j][v]);
		printf("\n");	
        }
            	if(v==2)
    	{
        printf("%sBook Subject = ",arr[j][v]);	
        printf("\n");
        }
            	if(v==3)
    	{
        printf("%sBook Pages = ",arr[j][v]);
		printf("\n");	
        }
            	if(v==4)
    	{
        printf("%sBook Author = ",arr[j][v]);
		printf("\n");	
        }
    } 
}
} 
void Heading(const char* Page_type)
{
	int option;
	topMessage("Lovely Professional University Library Management System",Page_type);
	printf("\t\t 1.Add new book \n");
	printf("\t\t 2.View Book\n");
	printf("\t\t 3.Search Book\n");
	printf("\t\t 4.Exit\n");
    printf("\t\t Please Select an option..... ");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{
			   system("cls");
			   addBook("************ add new book ************");	   
		    }
		    case 2:
		    	{
		    		system("cls");
		    		viewBook(50,"*********** View Books ***********");	
				}
				case 3:
					{
						printf("******************  This Feature is currently in Work Press Y to Refresh ************************");
						char ch;
						scanf("%s",&ch);
						if(ch == 'Y' || ch == 'y')
						{
							system("cls");
							Heading("********* Menu Page **********");
						}
						else
						{
							system("cls");
							Heading("********* Menu Page **********");	
						}
					}
					case 4:
						{
							system("cls");
							printf("******* Thankyou **********");
						}
		    default :
		    	{
		    		system("cls");
		    		Heading("********* Menu Page **********");
				}
	}
	
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
}
int main()
{
	welcomePage();
	return 0;
}
