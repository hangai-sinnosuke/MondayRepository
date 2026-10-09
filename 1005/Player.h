#pragma once
#include"Character.h"
class Player :public Character
{
public:
	Player(int hp, int Akt, int Dfe, int Avo);

	int choice();
};

