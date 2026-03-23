#include "util.h"

int main() {
	/*srand(time(NULL));*/

	int array[]{1,3,4,5,6,7,9,10,11,12,2,13,14,15,8,16,17,18,19,20 };
	int size = 20;

	/*cout << "Input size of array: ";
	cin >> size;

	init_random(array, size, 0, 100);*/

	/*long long start = time(NULL);*/

	print("Before:\n");
	print(convert(array, size) + "\n");

	//sort_selected(array, size);
	sort_inserted(array, size);

	print("After:\n");
	print(convert(array, size) + "\n");

	/*long long finish = time(NULL);

	print(get_time(start, finish));*/

	return 0;
}