#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"flight_operations.h"



int main()
{
    void reserve();
    void cancel();
    void display();
    void file_op();
    
    int ch;
    int n=0;
    
    init=flow=NULL;

    do
	{
		            
		printf("\n\n\t\t ********************************************************************");
		printf("\n\t\t                  Airline Reservation System                   ");
		printf("\n\t\t   *******************************************************************");
		printf("\n\n\n\t\t Select an Action (1-4):");
		printf("\n\n\t\t 1. Reserve a seat");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. Display Records");
		printf("\n\n\t\t 4. EXIT");

        scanf("%d", &ch);
        
        switch(ch)
	{
		case 1:
			reserve(n);
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
				savefile();
				break;
		}
		default:  
			printf("\n\n\t INVALID CHOICE!");
			printf("\n\n\t Select an option from 1-4");
		
		}

	} while (ch != 4); 
    
    return 0;

}


