#include <stdio.h>
#include <conio.h>
int push(int);
int pop(int);
int Stack[5];
int top = -1;
int i,n;
int main() {
	int store;
	int remove;
	clrscr();
	push(store);
	getch();
	if(top!=-1){
	printf("Value to be Pushed at Stack[%d] = %d\n" , top, push(store));
	}
	else {
	printf("Stack is Empty.\n");
	}
	getch();
	return 0;
}
int push(int store) {
	printf("Enter Number to perform Pop Oparation.\n");
	scanf("%d" , &n);
	if(n>5) {
		printf("Stack is Overflow.!\n");
	}
	else {
	for(i = 0;i<=n;i++) {
	store = Stack[i];
	top += 1;
	printf("Enter a Value to Pushed at Stack[%d].\n" , i);
	scanf("%d" , &store);
	}
	}
	return store;
}