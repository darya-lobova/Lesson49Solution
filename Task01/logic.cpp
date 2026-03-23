#include "logic.h"


//O(N^2)
void sort_selected(int array[], int length) {

	for (int i = 0; i < length - 1; i++)
	{
		int index = i;

		for (int j = i + 1; j < length; j++) {
			if (array[j] > array[index]) {
				index = j;

			}
		}
		int t = array[index];
		array[index] = array[i];
		array[i] = t;
	}
}