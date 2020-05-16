/**********************************************/
/* Author       : Naveenkumar N               */
/* Date         : 15-05-2020                  */
/* Filename     : Sparse_Matrix.c             */
/* Description  : Sparse_Matrix               */
/**********************************************/


#include "Sparse_Matrix.h"


int main(){

	int arr[4][5] ={
			{1,0,3,4,5},
			{6,7,0,9,10},
			{11,12,0,14,0},
			{16,17,18,19,20}
		       };

	for(int i = 0; i<4; i++){
		for(int j = 0; j<5; j++){
			allocate_spar_matrix(arr[i][j],i,j);
		}
	}	
	print_all_data(head);
}

int allocate_spar_matrix(int arr_data,int col_num,int row_num){

	struct database *new_2 = head;

	if(head == NULL){
		head =(struct database *)malloc(sizeof(struct database));
		head -> next = NULL;
		new_2= head;
	}else{
		while(new_2 -> next != NULL){
			new_2 = new_2 -> next;
		}
		new_2 -> next = (struct database *)malloc(sizeof(struct database));
		new_2 -> next -> next  = NULL;
		new_2 =  new_2 ->next;
	}	
		new_2 -> data = arr_data;
		new_2 -> row_pos = row_num;
		new_2 -> colume_pos = col_num;
}


int print_all_data(struct database *print){
	
	 if(print == NULL){
		 printf("No data in array\n\n");
	 }
	 while(print -> next != NULL ){
		 if(print -> data == 0){
		 print = print->next;
		 }else{
		 printf("data = %d row pos num = %d colume pos num = %d\n",print -> data,print -> row_pos,print -> colume_pos);
		 print = print->next;
		 }
	 }

 }
