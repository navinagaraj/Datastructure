/************************************************/
/* Author	: Naveenkumar N                 */
/* Date		: 1-08-2019                     */
/* Filename	: double_link-list              */
/* Description	: D-Linklist Insert delete Node */
/************************************************/

/* Included header file */

#include "double_link-list"

/* Global variable definitions */


/* function definitions */


void print_data();
void using_prev();

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *all_print = NULL;
struct node *prev_head = NULL;

int main()
{
	struct node *ptr1 = (struct node *)malloc(sizeof(struct node));/*  The malloc() function allocates size bytes and returns a pointer to the allocated memory.  The memory  is  not  initialized.If size  is  0,  then  malloc()  returns  either  NULL ) */
	ptr1->data = 1;
	ptr1->prev = NULL;
	ptr1->next = NULL;

	struct node *ptr2 = (struct node *)malloc(sizeof(struct node));/*  The malloc() function allocates size bytes and returns a pointer to the allocated memory.  The memory  is  not  i    nitialized.If size  is  0,  then  malloc()  returns  either  NULL ) */

	ptr2->data = 4;
	ptr2->prev = ptr1;
	ptr2->next = NULL;
	
	head = ptr1;
	ptr1->next = ptr2;
	printf("Before insert 2 Data\n");
	print_data();

	struct node *ptr3 = (struct node *)malloc(sizeof(struct node));/*  The malloc() function allocates size bytes and returns a pointer to the allocated memory.  The memory  is  not  i    nitialized.If size  is  0,  then  malloc()  returns  either  NULL ) */


	ptr3->data = 8;
	ptr3->next = NULL;


	ptr3->next = ptr2;
	ptr1->next = ptr3;

	printf("After insert 3 Data\n");
	print_data();

	printf("After delete Inserted Data\n");
	ptr1->next = ptr2;
	
	prev_head = ptr2;
	ptr3->next = NULL;
	print_data();

	printf("Using double Link list print out puts a reverse order\n");
	using_prev();

	free(ptr1);/*  The free() function frees the memory space pointed  to  by  ptr */

	free(ptr2);/*  The free() function frees the memory space pointed  to  by  ptr */

	free(ptr3);/*  The free() function frees the memory space pointed  to  by  ptr */
}

void print_data()
{
	int i=0;
	all_print = head;
	while(all_print != NULL)
	{
		i++;
		printf("List %d data is %d\n",i,all_print -> data);
		all_print  = all_print -> next;
	}
}


void using_prev()
{
	int i=0;
	all_print = prev_head;
	while(all_print != NULL)
	{
		i++;
		printf("List %d data is %d\n",i,all_print ->data);
		all_print  = all_print -> prev;
	}
}
