#include<iostream>
#include"Game.h"
#include"Config.h"

using namespace std;

void DrawCard()
{
	srand((unsigned int)time(NULL));

	int Player = 0;
	int CPU = 0;
	int Card = rand() % 14;

	Player = Card + Card;
	CPU = Card + Card;
}

void MainGame(int Player,int CPU)
{
	while (true)
	{
		if (Player < SCOREMAX)
		{
			cin >> Player;
		}
		else if (Player > BURSTSCORE)
		{
			break;
		}
	}

}

