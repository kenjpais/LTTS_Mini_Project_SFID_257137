#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"../inc/flight_operations.h"

struct records
{
    char p_no[9];
    char name[15];
    int seat_num;
    char email[40];
    int diet;
    struct records *next;

}*init,*flow;

/**
 * @brief Node to traverse
 * 
 */

struct records *trav;
void user_input();

/**
 * @brief Function to book a seat
 * @param[in] x 
 * @return void
 */

void book(int x) 
{
	flow = init;
	if (init == NULL)
	{
		//allocates memory for user 1
	
		init = flow = (struct records*)malloc(sizeof(struct records));


		user_input(); //collect user data
                flow->next = NULL; 
		printf("\n\t Booking successful!");
		printf("\n\t Seat number is: Seat A-%d", x); //verify seat number
		flow->seat_num = x;
		return; 
		free(init); //deallocation
		free(flow);

	}
	else if (x > 15) //maximum capacity reached
	{
		printf("\n\t Sorry, Seats are Full\n");
		return;
	}
	else
	{        
		
		//memory allocation for consecutive user
		while(flow ->next)
                     flow=flow->next;
		
                flow->next = (struct records*)malloc(sizeof(struct records));
		flow = flow->next;
		user_input();

		flow->next = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t Seat number: Seat A-%d", x);
		flow->seat_num = x;
		return;
	}
}

/**
* @brief Function to cancel booking
* @return void
*/

void cancel()
{
	flow =init;  
	
	char p_no[7];
     
	 //deleting respective record
	printf("\n\nTo delete record: Enter the passport number:\n");
	scanf("%s",p_no);
    
    if(strcmp(init->p_no, p_no) == 0)
	{
		trav = init;
		init = init->next;
		free(trav); 
		printf("\n Booking has been deleted\n");
		return;

	}

	while (flow->next)      
	{
		if (strcmp(flow->next->p_no,p_no) == 0)
		{
			trav = flow->next;
			flow->next = flow->next->next;
			free(trav);	
			printf("\nOther records have been deleted\n ");
			return;
		}
		flow = flow -> next;
	}
	printf("\nWrong passport number\n");

}



