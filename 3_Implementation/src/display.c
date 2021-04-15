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



void display()
{
    flow = init;

    while(flow)
    {
        printf("\n\n Passport Number : %-6s",flow->p_no);
		printf("\n   Name : %-15s",flow->name);
		printf("\n   E-mail Address: %-15s",flow->email);
		printf("\n   Seat Number: A-%d",flow->seat_num);
		printf("\n\n++*=====================================================*++");
		flow = flow ->next;  
	}


}
