#include <stdio.h>
#include <stdlib.h>
//Creation Of Node
struct Node {
	int data; //data
	struct Node *next; //link
};
void insertStart(struct Node **head,int data)
{
	struct Node *newNode = (struct Node *) malloc (sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}
void display(struct Node *node)
{
	while(node != NULL)
	{
		printf("%d " , node->data);
		node = node->next;
	}
	printf("\n");
}
int main()
{
	struct Node *head = NULL;
	struct Node *node2 = NULL;
	struct Node *node3 = NULL;
	struct Node *node4 = NULL;
	clrscr();
	head = (struct Node *) malloc (sizeof(struct Node));
	node2 = (struct Node *) malloc (sizeof(struct Node));
	node3 = (struct Node *) malloc (sizeof(struct Node));
	node4 = (struct Node *) malloc (sizeof(struct Node));
	head->data = 15;
	head->next = node2;
	node2->data = 10;
	node2->next = node3;
	node3->data = 12;
	node3->next = node4;
	node4->data = 3;
	node4->next = NULL;
	printf("LinkList: ");
	display(head);
	insertStart(&head,25);
	printf("After Insertation of Element\n");
	printf("LinkList: ");
	display(head);
	getch();
	return 0;
}




