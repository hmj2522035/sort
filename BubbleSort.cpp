#include "BubbleSort.h"

void BubbleSort::Exec(int* array, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (array[i] > array[j]) {
				int number = array[i];
				array[i] = array[j];
				array[j] = number;
			}
		}
	}
}