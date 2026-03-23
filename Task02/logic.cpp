#include "util.h"

void sort_inserted(int array[], int length) {

	for (int i = 1; i < length; i++)
	{
		
		int key = array[i];
		int j = i - 1;

		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
}

string find_dublicates(int array[], int length) {
	string s = "";
	for (int i = 0; i < length; i++)
	{
		if (array[i] == array[i + 1]) {
			s += to_string(array[i]) + " ";
		}
		else {
			s += "";
		}
	}
	return s;
}