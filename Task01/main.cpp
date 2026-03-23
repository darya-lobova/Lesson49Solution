#include "util.h"

int main() {
	srand(time(NULL));

	int array[DEFAULT_SIZE];
	int size;

	cout << "Input size of array: ";
	cin >> size;

	init_random(array, size, 0, 100);

	/*long long start = time(NULL);*/

	print("Before:\n");
	print(convert(array, size) + "\n");

	sort_selected(array, size);

	print("After:\n");
	print(convert(array, size) + "\n");

	/*long long finish = time(NULL);

	print(get_time(start, finish));*/

	return 0;
}