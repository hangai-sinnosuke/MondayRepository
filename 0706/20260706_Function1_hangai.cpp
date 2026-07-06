#include<iostream>
#include"20260706_Header1_hangai.h"
#include"20260706_Config_hangai.h"

using namespace std;
//回復
void Heal(int& hp)
{
	//回復
	hp += 20;
	//表示
	cout << "ライフを20回復した \n";
}
//入力チェック
int InputCheck(int min,int max)
{
	//変数
	int num;
	//入力チェック
	while (true)
	{
		//入力
		cin >> num;

		if (min > num || max < num)
		{
			cout << "入力エラー \n";
		}
		else
		{
			//ループを抜ける
			break;
		}
	}
	//戻り値
	return num;
}

void judg()
{
	//変数
	int playerHp = ConstNumber::PLAYER_HP;
	int select;
	//内容の表示
	cout << "HPを回復させますか？\nYES：1 NO：2" << endl;
	//入力チェック関数を渡し、戻り値で選択を持ってくる
	select = InputCheck(ConstNumber::HP_MIN, ConstNumber::HP_MAX);
	//回復
	//1の場合
	if (select == 1)
	{
		//回復関数にプレイヤーHPを参照する
		Heal(playerHp);
	}
	//変化なし
	else
	{
		cout << "回復しなかった\n";
	}
	//HP表示
	cout << "PlayerのHPは" << playerHp << "です\n";
}