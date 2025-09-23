#include <stdio.h>
#include <conio.h>
#define MAX 5
int queue[MAX], front=-1, rear=-1;
void insert_from_front(int value) {
	if((front==0 && rear==MAX-1) || (front==(rear+1)%MAX)) {
		printf("Queue is Full.\n");
		getch();
		exit(0);
	}
	else {
		if(front==-1) {
			front = rear = 0;
		}
		else {
			if(front==0) {
			       front = MAX-1;
			}
			else {
				front = front-1;
			}
		}
	scanf("%d" , &value);
	queue[front] = value;
	}
void insert_from_rear(int value) {
	if((front==0 && rear==MAX-1) || (front==(rear+1)%MAX)) {
		printf("Queue is Full.\n");
		getch();
		exit(0);
	}
	else {
		if(front==-1) {
			front = rear = 0;
		}
		else {
			if(rear==MAX-1) {
			       rear=0;
			}
			else {
				rear=rear+1;
			}
		}
	scanf("%d" , &value);
	queue[rear] = value;
	}

 }
void delete_from_rear() {
	if(front==-1) {
		printf("Queue is Underflow.\n");
		getch();
		exit(0);
	}
	else {
		if(rear == 0) {
			printf("Deleted Element = %d" , queue[rear]);
			rear = MAX-1;
		}
		else {
			printf("Deleted Element = %d" , queue[rear]);
			rear = rear-1;
		}
	}
}
void display();
int main() {
	int ch;
	int x;
	clrscr();
	do {
		printf("1. Insert from Front\n2. Insert From Rear\n3. Delete from Front\n4. Delete from Rear\5. Display\n");
		scanf("%d" , &ch);
		switch(ch) {
			case 1: insert_from_front();
				break;
			case 2: insert_from_rear();
				break;
			case 3: delete_from_front();
				break;
			case 4: delete_from_rear();
				break;
			case 5: display();
				break;
			default: printf("Enter a valid Input.\n");
				break;
		}
		printf("Do you want to continue..? Then press 1");
		scanf("%d" , &x);

	}while(x==1);
	getch();
	return 0;
}