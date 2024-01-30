#include<stdio.h>
#include <stdlib.h>

#include "algorithms/bubble_sort.h"
#include "data-structures/dynamic_array.h"

#include "data-structures/linked_list.h"

void dynamic_array_test();
void linked_list_test();

int main(int argc, char* argv[]){
	linked_list_test();
	return 0;
}

void linked_list_test(){
	LinkedList* source = linked_list_init(12, NULL);
	linked_list_add(source, 43);
	linked_list_add(source, 22);
	linked_list_add(source, 16);
	linked_list_remove(source);
	linked_list_add(source, 32);
	linked_list_add(source, 22);
	linked_list_add(source, 895);
	linked_list_remove(source);
	linked_list_add(source, 85);
	linked_list_remove(source);
	linked_list_remove(source);
	linked_list_remove(source);
	linked_list_add(source, 79);	
	linked_list_remove(source);
	linked_list_add(source, 190);	
	linked_list_add(source, 51);
	
	printf("Values in list : ");
	LinkedList* tail = source;
	while(tail != NULL){
		printf("%d ", tail->value);
		tail = tail->next;
	}
	printf("\n");
}

void dynamic_array_test(){	
    printf("Enter a sequence of integers you wish to to sort (e.g., 1 5 8 93 24...), followed by a period (.):\n");

	DynamicArray* dynamic = dynamic_init(1);
	
    int val;	
    while (scanf("%d", &val) == 1) { // needs better input parsing
        dynamic_insert(dynamic, val);
    }
	
	bubble_sort(dynamic->array, dynamic->length);
	
	printf("Bubble-Sorted array is : ");
	for(size_t i = 0; i < dynamic->length; ++i){
		printf("%d ", dynamic->array[i]);
	}
	printf("\n");
	   
	free(dynamic->array);
    free(dynamic);
	
}