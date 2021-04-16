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

//struct records *trav;
/**
*  reserves the seat on flight
* @param[in] x
* @return void
*/
void reserve();

/**
*  Takes in the details of user input
* @param[in] x
* @return void
*/
void user_input();

/**
*  saves the file
* @return void 
*/
void file_op();


/**
* cancels flight booking
* @return void
*/
void cancel();

/**
* displays flight booking
* @return void
*/
void display();

#endif  /* #define __FLIGHT_OPERATIONS_H__ */
