/***************************************/
/* Author	:Naveenkumar N         */
/* Date		:13-05-2020	       */
/* Filename	:ds_back_up            */
/* Description	:ds_back_up            */
/***************************************/

#ifndef MAKE_H
#define MAKE_H

/* Included header files */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <error.h>
#include <string.h>

/* Macro Definitions */

/* Functions prototype */


/* user defined datatype definitions */

struct database{
	int roll_num;
	char name[30];
	int  age;
};

#endif //MAKE_H
