#include<stdio.h>
#include<stdlib.h>
#include"flight_operations.h"

void cancel(struct records *init, struct records *flow)
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