// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"malloc.h"
#include"conio.h"
#include<stdio.h>
#include <time.h>
#include"stdlib.h"



struct Node
{
	int value;
	Node * next;
};

Node* addNodeAtBegining(Node * head, int v)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->value = v;
	newNode->next=head;
	return newNode;
}
/*void max(Node **node )
{
	 Node *r;
	int max = 0;
	r = *node;
	while (r != NULL) {
		if (r->value>max) {
			max = r->value;
		}
		r = r->next;
	}

	printf("The max is %d", max);
	printf("\n");
}*/

void printList(Node * head) {
	Node * node = head;
	while (node != NULL)
	{
		printf("%d\n", node->value);
		node = node->next;
	}
	printf("\n");
}

	int main()
{
	srand(time(NULL));
	Node * head = NULL;
	int i;
	int* r =(int*) malloc(sizeof(int));
	int k;
	
	
	printf("Write count of number which you want to see:\n");
	scanf_s("%d", &k);
	for (int i = 0; i < k; i++) {
		r[i] = rand()%10;
		head = addNodeAtBegining(head, r[i]);
		printf("\n");
	}
	printList(head);
	Node *min=head;
	Node *max = head;
	Node * node = head;

		while(node!=NULL){
		if(node->value<min->value){
			min=node;
		}
		node=node->next;
	}
		printf("The Min is %d\n", min->value);
		node = head;
		while (node != NULL) {
			if (node->value>max->value) {
				max = node;
			}
			node = node->next;
		}
		printf("The Max is %d\n", max->value);
		//max(&head);
		int swap = min->value;
		min->value = max->value;
		max->value = swap;
		printf("Changed list:\n");
		printList(head);
_getch();
	return 0;
}
