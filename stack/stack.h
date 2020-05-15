/***************************************/
/* Author	:Naveenkumar N         */
/* Date		:10-05-2020            */
/* Filename	:stack.h               */
/* Description	:stack                 */
/***************************************/

#ifndef MAKE_H
#define MAKE_H

/* Included header files */

#include <stdio.h>

/* Macro Definitions */
#define MAXSIZE 5

/* Functions prototype */
void push();
int pop();
void display();


/* user defined datatype definitions */
struct stack
{
	int stack[MAXSIZE];
	int top;
};
#endif //MAKE_H
