#include<iostream>

using namespace std;

int main(void)
{
	int number[5] = { 35,82,17,96,54 };
	int* ary;
	int max = 0;

	ary= number;

	for (int i = 0; i < 5; i++)
	{
		//”š‚ğ‘S‚Ä•\¦
		cout << *(ary + i) << endl;

		if (max < *(ary + i))
		{
			max = *(ary + i);
		}

	}


	cout << "Å‘å’l: "<< "[" << max << "]" << endl;

	return 0;
}
