/**********************************************/
/* Author       : Naveenkumar N               */
/* Date         : 15-05-2020                  */
/* Filename     : Sparse_Matrix.h             */
/* Description  : Sparse_Matrix               */
/**********************************************/


#ifndef SPARESE_MATRIX_H
#define SPARESE_MATRIX_H 

/* Included header files */

#include <stdio.h>
#include <stdlib.h>

/* Macro Definitions */
struct database{
	int data;
	int row_pos;
	int colume_pos;
	struct database *next;
};
struct database *head = NULL;

/* Functions prototype */
int allocate_spar_matrix(int,int,int);
int print_all_data(struct database *);


/* user defined datatype definitions */

#endif //SPARESE_MATRIX_H
