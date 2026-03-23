#include "util.h"

int main() {
	srand(time(NULL));

	int array[10];
	int size = 10;

	/*cout << "Input size of array: ";
	cin >> size;*/

	init_random(array, size, 0, 100);

	/*long long start = time(NULL);*/

	//sort_selected(array, size);
	sort_inserted(array, size);

	//long long finish = time(NULL);

	string result = find_dublicates(array, size);

	print(result);

	return 0;
}