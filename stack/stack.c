/***************************************/
/* Author	:Naveenkumar N         */
/* Date		:10-05-2020            */
/* Filename	:stack.c               */
/* Description	:stack                 */
/***************************************/


#include "stack.h"

struct stack
{
	int stack[MAXSIZE];
	int top;
}stack;


int main(){

	int a;

	stack.top = -1;

	while(1){
		printf(" 1 -> Push\n");
		printf(" 2 -> Pop\n");
		printf(" 3 -> Display\n");
		printf(" 4 -> Exit\n");
		scanf("%d",&a);

		switch(a){
			case 1 :
				push();
				break ;
			case 2 :
				pop();
				break ;
			case 3 :
				display();
				break ;
			case 4 :
				return 0;
		}
	}
}


void push(){
	int num;

	if(stack.top == (MAXSIZE - 1)){
		printf("Stack is empty\n");
		return;
	}else{
		printf("Enter the element to push\n");
		scanf("%d",&num);
		stack.top = stack.top + 1;
		stack.stack[stack.top] = num;
	}

}

int pop(){
	int num;
	if(stack.top == -1){
		printf("Stack is empty\n");
	}else{
		num = stack.stack[stack.top];
		printf("poped element = %d\n",stack.stack[stack.top]);
		stack.top = stack.top - 1;
	}

}
void display(){
	int i;
	if(stack.top == -1){
		printf("Stack is empty\n");
	}else{
		printf("The status of stack\n");
		for(i = stack.top; i>=0; i--)
		{
			printf("%d\n",stack.stack[i]);
		}
	}
}
