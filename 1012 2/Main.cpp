#include<iostream>
#include"Character.h"

using namespace std;

int main(void)
{
	//コンストラクタ
	Character character("石破天驚");
	cout << character.GetName() << endl;

	character.Attack();

	return 0;
}

