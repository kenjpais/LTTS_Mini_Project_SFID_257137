#include<stdio.h>
#include<stdlib.h>

#include"flight_operations.h"

struct records
{
    char p_no[9];
    char name[15];
    int seat_num;
    char email[15];
    struct records *next;

}*init,*flow;

/**
 * @brief Node to traverse
 * 
 */

struct records *trav;


void book(int x) 
{
	flow = init;
	if (init == NULL)
	{
	
		init = flow = (struct records*)malloc(sizeof(struct records));


		user_input(init,flow);
        flow->next = NULL; 
		printf("\n\t Booking successful!");
		printf("\n\t Your seat number is: Seat A-%d", x);
		flow->seat_num = x;
		return; 
	}
	else if (x > 15) // FULL SEATS
	{
		printf("\n\t\t Sorry, Seats are Full");
		return;
	}
	else
	{                                 
		
		while (flow ->next)
         flow=flow->next;
		
        flow->next = (struct record*)malloc(sizeof(struct record));
		flow = flow->next;
		user_input();
		flow->next = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t Seat number: Seat A-%d", x);
		flow->seat_num = x;
		return;
	}
}

void cancel()
{
	flow =init;  
	
	char p_no[6];

	printf("\n\n Enter passort number to delete record:");
	scanf("%s",&p_no);
    
    if(strcmp(init->p_no, p_no) == 0)
	{
		trav = init;
		init = init->next;
		free(trav); 
		printf(" Booking has been deleted");
		return;

	}

	while (flow->next)      
	{
		if (strcmp(flow->next->p_no,p_no) == 0)
		{
			trav = flow->next;
			flow->next = flow->next->next;
			free(trav);	
			printf("Other records have been deleted ");
			return;
		}
		flow = flow -> next;
	}
	printf("\nWrong passport number\n");

}

