/***************************************/
/* Author	:Naveenkumar N         */
/* Date		:10-05-2020            */
/* Filename	:stack.c               */
/* Description	:stack                 */
/***************************************/


#include "stack.h"

int main(){

	int choice;

	stack.top = -1;

	while(1){
		printf(" 1 -> Push\n");
		printf(" 2 -> Pop\n");
		printf(" 3 -> Display\n");
		printf(" 4 -> Exit\n");
		scanf("%d",&choice);

		switch(choise){
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
				return;
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
		scanf("d",&num);
		stack.top = stack.top + 1;
		stack.stk[stack.top] = num;
	}

}

int pop(){
	int num;
	if(stack.top == -1){
		printf("Stack is empty\n");
		return;
	}else{
		num = stack.stk[stack.top];
		printf("poped element = %d\n",stack.stk[stack.top]):
		stack.top = stack.top - 1;
	}

}
void display(){
	int i;
	if(stack.top == -1){
		printf("Stack is empty\n");
		return;
	}else{
		printf("The status of stack\n");
		for(i = stack.top; i>=0; i--)
		{
			printf("%d\n",stack.stk[i]);
		}
	}
}
