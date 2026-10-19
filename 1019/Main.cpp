#include<iostream>
#include"Servant.h"
#include "Rider.h"
#include "Archer.h"
#include "Saber.h"
using namespace std;

int main(void)
{
	//インスタンス
	Saber saber;
	Archer archer;
	Rider rider;

	//英霊の攻撃とプロフィール＝＝＝＝＝＝＝＝＝＝＝＝＝

	//セイバー
	saber.ShowProfile();
	saber.Attack();
	//アーチャー
	archer.ShowProfile();
	archer.Attack();
	//ライダー
	rider.ShowProfile();
	rider.Attack();

	return 0;
}