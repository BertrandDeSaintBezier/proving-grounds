#include<stdio.h>
#include <stdlib.h>

#include "data-structures/dynamic_array.h"
#include "algorithms/bubble_sort.h"

int main(int argc, char* argv[]){
    printf("Enter a sequence of integers you wish to to sort (e.g., 1 5 8 93 24...), followed by a period (.):\n");

	DynamicArray* dynamic = dynamic_init(1);
	
    int val;	
    while (scanf("%d", &val)) { // needs better input parsing
        dynamic_insert(dynamic, val);
    }
	
	bubble_sort(dynamic->array, dynamic->length);
	
	printf("Bubble-Sorted array is : ");
	for(size_t i = 0; i < dynamic->length; ++i){
		printf("%d ", dynamic->array[i]);
	}
	printf("\n");
	
	return 0;
}