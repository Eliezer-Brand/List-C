#include <stdio.h>
#include <stdlib.h>
#include "List.h"

void controller();
void print_actions();

int main() {

	controller();

	return EXIT_SUCCESS;
}

void controller() {
	char action;
	int input;
	struct Node* head = NULL;

	print_actions();
	while ((action = getchar()) != 'q') {
		switch (action)
		{
		case 'i':
			scanf_s("%d", &input);
			insert_node(&head, &input);
			break;
		case 'd':
			scanf_s("%d", &input);
			delete_node(&head, &input);
			break;
		case 'p':
			print_list(head);
			break;
		case 'c':
			clear_list(&head);
			break;

		default:
			break;
		}
	}

	return;
}

void print_actions() {
	puts("-----------------------------------------------------");
	puts("- Please enter one of the option below:");
	puts("- i <number>	Add a new node with a given number");
	puts("- d <number>	Delete the given number from the list");
	puts("- p		Print all list");
	puts("- c		Clear all list");
	puts("-----------------------------------------------------\n");

	return;
}