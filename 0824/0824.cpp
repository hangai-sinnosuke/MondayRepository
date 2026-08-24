#include <iostream>

using namespace std;

int main(void)
{
    //変数
    int a = 0;
    //pにaのアドレスを渡す
    int* p = &a;
    //aの初期値表示
    cout << "aの初期値: " << a << endl;
    //pからaに数字を渡す
    *p = 10;
    //aの最終的な値の表示
    cout << "aの変更後の値: " << a << endl;

    return 0;
}