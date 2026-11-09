#include<iostream>
#include<memory>
#include"Enemy_second.h"

void ShowEnemy(const Enemy_second& enemy)
{
	std::cout << "ŠÖ”“à‚ÌEnemy‚ð•\Ž¦‚·‚é" << endl;
	enemy.Draw();
}

int main(void)
{
	//unique_ptr‚ÅEnemy‚ð¶¬
	std::unique_ptr<Enemy_second> enemy = std::make_unique<Enemy_second>("–I");

	std::cout << "¶¬‚µ‚½“G‚Í" << std::endl;

	enemy->Draw();

	ShowEnemy(*enemy);

	std::cout << "ŠÖ”‚ðŒÄ‚Ño‚µ‚½Œã" << std::endl;
	enemy->Draw();

	return 0;
}