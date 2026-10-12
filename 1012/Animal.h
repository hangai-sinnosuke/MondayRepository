#pragma once
#include<string>
class Animal
{
private:
	std::string name;
public:
	//コンストラクタ
	Animal(std::string name);

	std::string GetName();
	//子クラスでも再定義できるメソッド
	virtual void Speak();
};

