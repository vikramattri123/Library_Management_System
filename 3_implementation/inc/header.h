
/**
 * @file header.h
 * @author Vikram Singh
 * @brief This Project is used in colleges and schools for Library Mangement work.
 * @date 14-04-2021
 * 
 * */
#ifndef __BOOK_H__
#define __BOOK_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 *@brief To Add new Books and store information about the books. 
 */
struct Book
	{
		int Book_id;
		char Book_Subject[100];
		char Book_name[100];
		char Author_Name[100];
	    int Book_Pages;
	}Book;

/**
 *@brief Home page of the system .To ask whether to continue in Poject or not.  
 */
void welcomePage()


/**
 *@brief To choose the option whether to add ,view or search in the System.
 */
void Heading(const char* Page_type)
 

 /**
  * @brief Add new employee to the database
  */ 
void addBook(const char* Page_type)


/**
 * @brief Option to move back to the menu
 */ 
void MenuPage(const char* Page_type)


/**
 * @brief Option to search book.
 */
void SearchBook(const char* Page_type)

/**
 * @brief Option To view All Book
 */
void ViewBook(const char* Page_type)


/**
 *@breif To Print welcome message on the Screen 
 */
void topMessage(const char* Info,const char* Page_type)


/**
 * @brief To Display Logo of College
 */ 
void DisplayMessage(const char* Page_type)

#endif