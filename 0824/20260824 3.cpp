#include<iostream>

using namespace std;

void Ary()
{


}

int main(void)
{
	int number[5] = { 10,20,30,40,50 };
	int* ary;

	ary = number;

	for (int i = 0; i < 5; i++)
	{
		cout << *(ary + i) << endl;

	}
	void Ary();

	return 0;
}