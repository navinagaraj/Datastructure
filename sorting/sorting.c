/*********************************************/
/* Author	: Naveen kumar.N             */
/* Date		: 09-04-2019                 */
/* Filename	: sorting.C                  */
/* Description	: sorting a list 	     */
/*********************************************/

/* Included header files */
#include"sorting.h"

/* user defined datatype definitions */
struct node
{
	struct  node  *prev;
	int     regno;
	char    *name;
	struct  node  *next;
};

struct node *print_ptr;
struct node *test;
int  testnum;
char *testname;


struct node *head = NULL;
struct node *last = NULL;

void insert_node(int data,char * name_ptr);



void insert_node(int data,char * name_ptr)
{
	/* The malloc() function allocates size bytes and returns a pointer to the allocated memory.The memory is not initialized. */
	struct node *ptr = (struct node *)malloc(sizeof(struct node));

	ptr->regno = data;
	ptr->name  = name_ptr;
	if(head==NULL)
	{
		last = ptr;
	}
	else
	{
		head->prev = ptr;
	}
	ptr->next = head;
	head = ptr;
	head->prev = NULL;
}

int main()
{

	int i = 0;
	insert_node(5 , "sample_Data");
	/* Inserting a data to structure */
	insert_node(7 , "sample_Data");
	/* Inserting a data to structure */
	insert_node(4 , "sample_Data");
	/* Inserting a data to structure */
	insert_node(10, "sample_Data");
	/* Inserting a data to structure */
	insert_node(11, "sample_Data");
	/* Inserting a data to structure */
	insert_node(15, "sample_Data");
	/* Inserting a data to structure */
	insert_node(3 , "sample_Data");
	/* Inserting a data to structure */
	
	printf("Before Sorting:\n");
	printf("___________________________________________\n");
	print_ptr = head;
	while(print_ptr != NULL)
	{
		i++;
		/* Printing the number of people in this structure */
		printf("| Node:%3d | Regno:%3d | Name:%3s  |\n",i,print_ptr->regno,print_ptr->name);
		print_ptr=print_ptr->next;
	}
	printf("___________________________________________\n");

	print_ptr = head;
	test = head;

	while(print_ptr != NULL)
	{
		/* Number of member in the structure loop */
		for(int j=1;j<=i;j++)
		{
		/* Checking the regno to sorting  */
		if( print_ptr->regno < test->regno )

		{
			testnum          = print_ptr->regno;
			testname         = print_ptr->name;
			print_ptr->regno = test->regno;
			print_ptr->name  = test->name;
			test->regno      = testnum;
			test->name       = testname;
		}
		test = test ->next ;
		}
	        test = head;
		print_ptr = print_ptr->next;
	}
	printf("\n\n");
	printf("After Sorting:\n");
	printf("___________________________________________\n");
	print_ptr =head;
	{
		while(print_ptr != NULL)
		{
		int b;
		b++;
		/* Printing the number of people in this structure after sorting */
		printf("| Node:%3d | Regno:%3d | Name:%3s  |\n",b,print_ptr->regno,print_ptr->name);
		print_ptr = print_ptr->next;
		}
	} 
	printf("___________________________________________\n");
}
