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

    for(j=1;j<5;j++)
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
        for(int r=0;i<=strlen(Book.Book_name);r++)
        {
        	if(Book.Book_name[r]>=65 && Book.Book_name[r]<=90)
        	{
        		Book.Book_name[r]=Book.Book_name+32;
			}
		}
        fprintf(fp,",%s ",tolower(Book.Book_name));
		}
		if(j==3)
		{
        for(int i=0;i<=strlen(Book.Subject);i++)
        {
        	if(Book.Book_Subject[i]>=65 && Book.Book_Subject[i]<=90)
        	{
        		Book.Book_Subject[i]=Book.Book_Subject[i]+32;
			}
		}			
			fprintf(fp,",%s ",tolower(Book.Book_Subject));
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
        for(int r=0;i<=strlen(Book.Author_Name);r++)
        {
        	if(Book.Author_Name[r]>=65 && Book.Author_Name[r]<=90)
        	{
        		Book.Author_Name[r]=Book.Author_Name[i]+32;
			}
		}
		fprintf(fp,",%s ",Book.Author_Name);
		printf("\n");
		}
	}
    }
    printf("Book Added Successfully");
    fclose(fp);
}