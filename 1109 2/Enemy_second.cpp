#include "Enemy_second.h"
#include<iostream>

Enemy_second::Enemy_second(const std::string& name) :Name(name), hp(100)
{
	std::cout << name << "‚ªoŒ»‚µ‚Ü‚µ‚½\n";
}

Enemy_second::~Enemy_second()
{
	std::cout << Name << "‚ð”jŠü‚µ‚Ü‚µ‚½\n";
}

//HP‚ðŽæ“¾
int Enemy_second::GetHp() const
{
	return hp;
}

void Enemy_second::Draw() const
{
	std::cout << "–¼‘O:" << Name << std::endl;
	std::cout << "HP:" << hp << std::endl;
}
