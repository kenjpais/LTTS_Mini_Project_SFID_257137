/** 
* @file flight_operations.h
* Flight operations
*/
#ifndef __FLIGHT_OPERATIONS_H__
#define __FLIGHT_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Structure containing details about passenger
 */

struct records
{
    int P_ID;
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
/**
*  reserves the seat on flight
* @param[in] x
* @return 
*/
void reserve(int x,struct records *init, struct records *flow);

/**
*  Takes in the details of user input
* @param[in] operand1 
* @return 
*/
void user_input(struct records *init, struct records *flow);

/**
*  saves the file
* @param[in] 
* @param[in] 
* @return 
*/
void file_op(struct records *init, struct records *flow);


/**
* cancels flight booking
* @param[in] operand1 
* @return 
*/
void cancel(struct records *init, struct records *flow);

/**
* displays flight booking
* @param[in] 
* @return 
*/
void display(struct records *init, struct records *flow);

#endif  /* #define __FLIGHT_OPERATIONS_H__ */
