#include<stdio.h>
#include<stdlib.h>

#include"../inc/flight_operations.h"

struct records
{
    char p_no[9];
    char name[15];
    int seat_num;
    char email[15];
    int diet;
    struct records *next;

}*flow;


/**
* @brief Function to recieve and collect passenger data
* @return void
*/


void user_input()
{
	int age=0;
    printf("\nEnter your Age: \n");
    scanf("%d",&age);
	if(age<5 || age>80)
	{
		printf("\n Sorry, passenger is not suitable for air travel\n"); //not suitable for travel
		return;
	}
	else
{
    //collecting user data
    printf("\n\t Passport Number:\n");
    scanf("%s",flow->p_no);
    printf("\n\t Name:\n");
    scanf("%s",flow->name);
    printf("\n\t Enter your email address:");
    scanf("%s",flow->email);
    printf("\nSelect Dietary option ie.Veg or Non-Veg?(1 for V, 2 for NV) \n");
    scanf("%d",&flow->diet);
}
}
