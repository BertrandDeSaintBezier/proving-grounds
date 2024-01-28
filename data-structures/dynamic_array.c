#include<stdio.h>
#include<stdlib.h>

#include "dynamic_array.h"

DynamicArray* dynamic_init(size_t init_size){
	DynamicArray* result = (DynamicArray*) malloc(sizeof(DynamicArray));
	if(init_size <= 0){
		init_size = 1;
	}
	result->array = (int*)malloc(sizeof(int)* init_size);	
	result->capacity = init_size;
	result->length = 0;
	
	for(size_t i = 0; i < init_size; ++i){
		result->array[i] = 0;
	}
	
	return result;
}

void dynamic_insert(DynamicArray* dynamic, int value){	
	if(dynamic->length >= dynamic->capacity){
		dynamic->capacity *= 2;
		dynamic->array = (int*)realloc(dynamic->array, sizeof(int) * dynamic->capacity);		
	}
	dynamic->array[dynamic->length] = value;
	dynamic->length++;
}

void dynamic_remove(DynamicArray* dynamic){
	if(dynamic->length >= 0){
		dynamic->array[dynamic->length] = 0;
		if(dynamic->length > 0){
			dynamic->length--;
		}
	}
}