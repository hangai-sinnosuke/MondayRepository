#include<iostream>
#include<ctime>
#include<cstdlib>
#include"20260706_Config_hangai.h"
#include"20260706_Header2_hangai.h"

using namespace std;
//入力チェック
int InputCheck(int min,int max)
{
	int num;
	while (true)
	{
		cin >> num;

		if (min > num || max < num)
		{
			cout << "入力エラー\n";
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
void Experience(int& a)
{

}