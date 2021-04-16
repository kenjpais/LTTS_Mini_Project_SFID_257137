#include<stdlib.h>
#include<stdio.h>

#include"../inc/flight_operations.h"

struct records
{
    char p_no[9];
    char name[15];
    int seat_num;
    char email[15];
    struct records *next;

}*init,*flow;



void file_op()
{
    FILE *f = fopen("flight_records","w");
    if(!f)
	{
		printf("\n Error in opening file!");
		return;
		
    }
	flow = init;
	while (flow)
	{
		fprintf(f, "%-6s", flow -> p_no);
		fprintf(f, "%-15s",flow -> name);
		fprintf(f, "%-15s",flow -> email);
		flow = flow->next;
	}
	printf("\n\n\t Details have been saved to file");
	fclose(f); 

}
