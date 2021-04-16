#include<header.h>

int SearchBook(int argc, char const *argv[]) 
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