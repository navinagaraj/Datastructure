#include <stdio.h>
#include <stdlib.h>


struct all_data{
	int num;
	char name[30];
	struct all_data *next;
};

struct all_data *head = NULL;
int add_user_data(void);
int main(){


}


int add_user_data(void){
	struct all_data *ptr = head;
	if(head == NULL){
		head = (struct all_data *)malloc(sizeof(struct all_data));
		head ->next = NULL;
		ptr = head;
	}else{
		while(ptr ->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr = (struct all_data *)malloc(sizeof(struct all_data));
		ptr ->next -> next = NULL;
		ptr = ptr ->next;
	}
	printf("Enter the user data\n");
	scanf("%d %s",&ptr->num,ptr->name);

}

int print_user_data(void){
	struct all_data *ptr = head;
		
		if(head == NULL) {
			printf("%s: user data is empty\n",__func__);
			//return ;
		} else {
			while (ptr != NULL) {
				printf("%s: Name - %s: Roll No - %d\n",__func__, ptr->name, ptr->num);
				ptr = ptr -> next;
				}
		}
}
