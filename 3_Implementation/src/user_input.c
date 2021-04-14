#include<stdio.h>
#include<stdlib.h>

#include"flight_operations.h"

void user_input(struct records *init, struct records *flow)
{
    printf("\n\t Passport Number:\n");
    scanf("%s",&flow->p_no);
    printf("\n\t Name:\n");
    scanf("%s",&flow->name);
    printf("\n\t Enter your email address:");
	scanf("%s",&flow->email);
}