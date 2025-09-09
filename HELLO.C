#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct stack {
       int val;
       struct stack *prev;
}*top=NULL;
typedef struct stack st;
void push();
int pop();
void display();
void main() {
	int ch,x;
	clrscr();
do{
	printf("1. Push \n2. POP \n3. Display\n");
	scanf("%d" , &ch);
	switch(ch)
	{
		case 1: push();
			break;
		case 2: printf("Return Value = %d\n" , pop());
			break;
		case 3: display();
			break;
		default: printf("Wrong Input.\n");
			break;
	}
	printf("Do you want to countine. then press 1.\n ");
	scanf("%d" , &x);
}while(x==1);
	getch();
}
void push()
{
	st *p;
	p = (st *)malloc(sizeof(st));
	printf("Enter One Value.\n");
	scanf("%d" , &p->val);
	p->prev=top;
	top = p;
}
int pop() {
	st *p;
	p = top;
	if(top==NULL)
	{
		printf("Stack is Empty");
		getch();
		exit(0);
	}
	else {
	top = top->prev;
	free(p);
	}
	return p->val;
}
void display()
{
	st *p;
	p=top;
	while(p->prev != NULL)
	{
		printf("%d",p->val);
	}
	printf("%d" ,p->val);
}





