#include<iostream>

using namespace std;

void Add(int& num)
{
	num += 10;
}

int main(void)
{
	int number;

	cout << "”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;

	cin >> number;

	Add(number);

	cout <<"Œ‹‰Ê‚Í" << number << "‚Å‚·" << endl;

	return  0;
}