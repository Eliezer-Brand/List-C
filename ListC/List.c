#include <stdlib.h>
#include <stdio.h>
#include "List.h"

struct Node* creat_node(const int* num) {
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));

	temp->_data = *num;
	temp->_next = NULL;

	return temp;
}

void insert_node(struct Node** head, const int* num) {
	struct Node** pHead = head;

	while (*pHead) pHead = &(*pHead)->_next;

	*pHead = creat_node(num);
	return;
}

void delete_node(struct Node** head, const int* num) {
	struct Node* temp;
	struct Node** pHead = head;

	while (*pHead && (*pHead)->_data != *num) pHead = &(*pHead)->_next;

	if (!*pHead) return;

	temp = *pHead;
	*pHead = (*pHead)->_next;
	free(temp);
	return;
}

void print_list(struct Node* head) {
	struct Node* pHead = head;

	if (!pHead) return;

	while (pHead) {
		printf("-> %d ", pHead->_data);
		pHead = pHead->_next;
	}
	putc('\n', stdout);
	return;
}

void clear_list(struct Node** head) {
	while (*head) delete_node(head, &(*head)->_data);
	return;
}