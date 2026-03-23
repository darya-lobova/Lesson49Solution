#include "logic.h"

void print(string s) {
	cout << s;
}

void init_random(int array[], int length, int a, int b) {
	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}

	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}
}
void init_user(int array[], int length) {
	cout << "Input array elements: ";
	for (int i = 0; i < length; i++)
	{
		cout << "array[" << i + 1 << "]: ";
		cin >> array[i];
	}
}

string convert(int array[], int length) {
	string s = to_string(array[0]);

	for (int i = 1; i < length; i++)
	{
		s += " " + to_string(array[i]);
	}

	return s;
}

string get_time(long long start, long long finish) {


	if (start > finish) {
		int t = start;
		start = finish;
		finish = t;
	}

	string result = "";

	long long time = finish - start;

	result += to_string(time / 3600);

	long long minute = time % 3600 / 60;
	result += ":";
	result += (minute < 10 ? "0" : "");
	result += to_string(minute);


	long long second = time % 60;
	result += ":";
	result += (second < 10 ? "0" : "");
	result += to_string(second);

	return result;
}