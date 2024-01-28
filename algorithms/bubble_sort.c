#include "bubble_sort.h"

void bubble_sort(int* source, size_t length){

	for(size_t i = 0; i < length; ++i){
		for(size_t j = 0; j < length - i; ++j){
			int temp = source[j];
			if(source[j] > source[j+1]){
				source[j] = source[j+1];
				source[j+1] = temp;
			}
		}
	}
}