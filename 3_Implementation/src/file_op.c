#include<stdlib.h>
#include<stdio.h>

#include"flight_operations.h"

void file_op(struct records *init, struct records *flow)
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