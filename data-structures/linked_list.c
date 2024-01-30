#include "linked_list.h"

LinkedList* linked_list_init(int init_value, LinkedList* previous){
	LinkedList* result = (LinkedList*) malloc(sizeof(LinkedList*));
	result->value = init_value;
	result->next = NULL;
	result->prev = previous;
	printf("Added value %d\n", init_value);
	return result;
}

void linked_list_add(LinkedList* source, int value){
	if(source == NULL){
		printf("Source is empty ! Aborting...");
		return;
	}
		
	LinkedList* tail = source;
	while(tail->next != NULL){
		tail = tail->next;
	}
	tail->next = linked_list_init(value, tail);
}

void linked_list_remove(LinkedList* source){
	if(source->next == NULL){
		free(source);
		return;
	}
	else{
		while(source->next != NULL){
			source = source->next;
		}
		source->prev->next = NULL;
		printf("Removing value %d\n", source->value);
		free(source);
	}
}