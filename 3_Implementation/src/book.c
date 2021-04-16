#include<stdio.h>
#include<string.h>
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


		user_input();
        flow->next = NULL; 
		printf("\n\t Booking successful!");
		printf("\n\t Your seat number is: Seat A-%d", x);
		flow->seat_num = x;
		return; 
		free(init);
		free(flow);

	}
	else if (x > 15) 
	{
		printf("\n\t Sorry, Seats are Full\n");
		return;
	}
	else
	{                                 
		
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

void cancel()
{
	flow =init;  
	
	char p_no[7];

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


