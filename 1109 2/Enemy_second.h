#pragma once
#include<string>

using namespace std;

class Enemy_second
{
private:
	string Name;
	int hp;
public:
	//コンストラクタ
	Enemy_second(const string& name);

	~Enemy_second();
	//HPを取得
	int GetHp()const;
	//情報処理
	void Draw()const;
};

