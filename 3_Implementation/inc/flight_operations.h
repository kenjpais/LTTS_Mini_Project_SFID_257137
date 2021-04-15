/** 
* @file flight_operations.h
* Flight operations
*/
#ifndef __FLIGHT_OPERATIONS_H__
#define __FLIGHT_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>


/**
 * @brief Node to traverse
 * 
 */

struct records *trav;
/**
*  reserves the seat on flight
* @param[in] x
* @param[in] init initial node
* @param[in] flow linked list
* @return 
*/
void reserve(int x,struct records *init, struct records *flow);

/**
*  Takes in the details of user input
* @param[in] x
* @param[in] init initial node
* @param[in] flow linked list
* @return 
*/
void user_input(struct records *init, struct records *flow);

/**
*  saves the file
* @param[in] init initial node
* @param[in] flow linked list
* @return 
*/
void file_op(struct records *init, struct records *flow);


/**
* cancels flight booking
* @param[in] init initial node
* @param[in] flow linked list
* @return 
*/
void cancel(struct records *init, struct records *flow);

/**
* displays flight booking
* @param[in] init initial node
* @param[in] flow linked list
* @return 
*/
void display(struct records *init, struct records *flow);

#endif  /* #define __FLIGHT_OPERATIONS_H__ */
