#pragma once

struct Node {
	int _data;
	struct Node* _next;
};

struct Node* creat_node(const int* num);
void insert_node(struct Node** head, const int* num);
void delete_node(struct Node** head, const int* num);
void print_list(struct Node* head);
void clear_list(struct Node** head);