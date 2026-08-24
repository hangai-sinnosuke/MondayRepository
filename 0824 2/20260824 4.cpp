#include<iostream>

using namespace std;

void Firstnumber(int* ary)
{
	for (int i = 0; i < 5; i++)
	{
		cout << *(ary + i) << endl;

	}
}

void numbers(int* ary)
{
	int num = 0;

	cin >> num;

	cout << "[" << num << "”{" << "]" << endl;

	for (int i = 0; i < 5; i++)
	{
		*(ary + i) *= num;

	}
}

int main(void)
{
	int number[5] = { 10,20,30,40,50 };
	int* ary;

	ary = number;

	Firstnumber(ary);

	numbers(ary);

	for (int i = 0; i < 5; i++)
	{
		cout << *(ary + i) << endl;

	}

	return 0;
}