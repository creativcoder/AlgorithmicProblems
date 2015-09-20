#include <stdio.h>
#include <malloc.h>

typedef  struct n {
	int data;
	struct n *next;
} node;

node *head = NULL;

void init() {
	head = (node*)malloc(sizeof(node));
	head->next = NULL;
}

void insert_begin() {
	int data;
	node *temp = (node*)malloc(sizeof(node));
	printf("Enter data to enter");
	scanf("%d",&data);
	temp->data = data;
	temp->next = head;
	head = temp;
}

void delete() {
	node *temp = head->next->next;
	free(head->next);
	head->next = temp;
	printf("Deleted node from front\n");
}

void wipe() {
	node *temp;
	temp = head;
	if (temp == NULL) return;
	else {free(temp);wipe(temp->next);}
}

void show() {
	node *temp = head;
	while(temp!=NULL) {
		printf("%d-->",temp->data );
		temp = temp->next;
	}
}

int main() {
	int c;
	while(1) {
	printf("Enter choice");
	printf("1) Initialize List\n");
	printf("2) Insert Data at beginning\n");
	printf("3) Delete from front\n");
	printf("4) Wipe all nodes in memory\n");
	printf("5) Show List contents\n");	
	scanf("%d",&c);
	switch(c) {
	case 1: {init();break;}
	case 2: {insert_begin();break;}
	case 3: {delete();break;}
	case 4: {wipe();break;}
	case 5: {show();break;}
	case -1: {}
	}

	}
}
