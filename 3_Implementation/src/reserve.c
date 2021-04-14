#include<stdio.h>
#include<stdlib.h>

#include"flight_operations.h"

void reserve(int x, struct records *init, struct records *flow) 
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
		printf("\n\t\t Seat Full");
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
		printf("\n\t Your seat number is: Seat A-%d", x);
		flow->seat_num = x;
		return;
	}
}
