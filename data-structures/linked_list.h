#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include<stdio.h>
#include<stdlib.h>

typedef struct LinkedList{
	int value;
	struct LinkedList* next;
	struct LinkedList* prev;
}LinkedList;

LinkedList* linked_list_init(int init_value, LinkedList* previous);
void linked_list_add(LinkedList* source, int value);
void linked_list_remove();
#endif