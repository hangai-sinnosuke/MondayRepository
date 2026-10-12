#include<iostream>
#include"Character.h"

using namespace std;

Character::Character(string name)
{
	this->name = name;
}

string Character::GetName()
{
	return name;
}

void Character::Attack()
{
	cout << "UŒ‚‚ð‚µ‚½" << endl;
}