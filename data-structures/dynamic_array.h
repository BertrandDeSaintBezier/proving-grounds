#ifndef DYNAMIC_ARRAY_H_
#define DYNAMIC_ARRAY_H_

#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int* array;
	int length;
	size_t capacity;
}DynamicArray;

DynamicArray* dynamic_init(size_t init_size);

void dynamic_insert(DynamicArray* dynamic, int value);
void dynamic_remove(DynamicArray* dynamic);

#endif