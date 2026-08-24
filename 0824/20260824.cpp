#include<iostream>

using namespace std;

int main(void)
{
	int number[5] = { 10,20,30,40,50 };
	int* ary;

	ary = number;

	for (int i = 0; i < 5; i++)
	{
		cout << "[" << i + 1 << "]" << "number : [" << *(ary + i) << "]" << endl;
	}

	return 0;
}