#include "Character.h"
#include"Config.h"

#include<iostream>
#include<cstdlib>

using namespace std;

Character::Character()
{
	hp = Config::MAX_HP;

	attck = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	defense = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	evasion = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
}
//ステータス表示
void Character::ShowStatus()
{
	cout << "" << hp << endl;
	cout << "" << attck << endl;
	cout << "" << defense << endl;
	cout << "" << evasion << endl;
}
//攻撃
void Character::Attack(Character& target)
{
	int randomValue = rand() % (Config::MAX_RANDOM_VALUE - Config::MIN_RANDOM_VALUE + 1) + Config::MIN_RANDOM_VALUE;
	int attackValue = attck + randomValue;
	cout << "攻撃は" << randomValue << endl;

}
