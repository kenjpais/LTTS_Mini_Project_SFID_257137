#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../inc/flight_operations.h"

struct records
{
    char p_no[9];
    char name[15];
    int seat_num;
    int diet;
    char email[40];
    struct records *next;

}*init,*flow;

struct records *trav;

void main()
{   
    int ch,n=1;

    void book(int x);
    void cancel();
    void display();
    void file_op();
    
    init=flow=NULL;

    do
	{
		            
		printf("\n\n\t\t ********************************************************************");
		printf("\n\t\t   ------------------------Airline Reservation System------------------");
		printf("\n\t\t   *******************************************************************");
		printf("\n\n\n\t\t Select an Action (1-4):");
		printf("\n\n\t\t 1. Book a seat");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. Display Records");
		printf("\n\n\t\t 4. EXIT");

        scanf("%d", &ch);
        
        switch(ch)
	{
		case 1:
			book(n);
			n++;
			break;  

		case 2:
			cancel();
			break;

		case 3:
			display();
			break;
		
        case 4:
		{
				file_op();
				break;
		}
		default:  
			printf("\n\n\t INVALID CHOICE!");
			printf("\n\n\t Select an option from 1-4");
		
		}

	} while (ch != 4); 
    
  

}
