#include "Enemy.h"
#include<iostream>

using namespace std;

Enemy::Enemy()
{
	cout << "Enemy‚ð¶¬‚µ‚Ü‚µ‚½" << endl;
}

Enemy::~Enemy()
{
	cout << "Enemy‚ð”pŠü‚µ‚Ü‚µ‚½" << endl;
}

void Enemy::Update()
{
	cout << "Enemy‚ðXV‚µ‚Ü‚µ‚½" << endl;
}

void Enemy::Draw()
{
	cout << "Enmey‚ð•`‰æ‚µ‚Ü‚·" << endl;
}
