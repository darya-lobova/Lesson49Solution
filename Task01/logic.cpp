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

//O(N^2)
// Best case - O(N)
void sort_inserted(int array[], int length) {

	int count_inner = 0;
	int count_outer = 0;

	for (int i = 1; i < length; i++)
	{
		count_outer++;
		int key = array[i];
		int j = i - 1;

		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
			count_inner++;
		}
		array[j + 1] = key;
	}
	cout << "Inner count: " << count_inner << endl;
	cout << "Outer count: " << count_outer << endl;
}