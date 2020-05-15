/***************************************/
/* Author	:Naveenkumar N         */
/* Date		:10-05-2020            */
/* Filename	:link_list.c           */
/* Description	:creat link_list       */
/***************************************/

#include "link_list.h"

struct database {
	int num;
	struct database *next;
};

struct database *head = NULL;

void add_element();
void print_element();

int main(){

	int key;

	while(1){
	printf("-----------------------------\n");
	printf("1 ----> Add a element       -\n");
	printf("2 ----> Print a element     -\n");
	printf("3 ----> Exit                -\n");
	printf("-----------------------------\n");
	printf("\n\n");
	printf("Enter the opction :");
	scanf("%d",&key);

		switch(key){
			case 1:
				add_element();
				break;
			case 2:
				print_element();
				break;
			case 3:
				return 0;
				break;
			default:
				printf("Case in default %s()\n",__func__);
				return 0;
		}
	}
}


void add_element(){
	struct database *ptr = head;

	if(head == NULL){
		head = (struct database *)malloc(sizeof(struct database));
		head -> next = NULL;
		ptr = head;
	}else {
		while(ptr -> next != NULL){
			ptr = ptr ->next;
		}
		ptr -> next  = (struct database *)malloc(sizeof(struct database));
		ptr -> next -> next  = NULL;
		ptr = ptr ->next;
	}
	printf("Enter the number\n");
	scanf("%d",&ptr -> num);
}

void print_element(){

	struct database *all_data = head;
	if(head == NULL){
		printf("No data in database\n");
	}
	while(all_data != NULL){
		printf("Number = %d\n",all_data->num);
		all_data = all_data ->next;
	}
}
