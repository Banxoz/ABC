#include <iostream>
#include <bitset>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int dec;
    int go;
    cout << "Введите число в десятичной системе счисления: ";
    cin >> dec;
    cout << "Двоичный вид: " << bitset<8>(dec) << endl;
    int i = 1;
    while (i >= 1)
    {
        cout << "Выполнить побитовый сдвиг влево? Введите 1, если да: ";
        cin >> go;
        if (go == 1)
        {
            dec = dec * 2;
            cout << "Двоичный вид: " << bitset<16>(dec) << endl;
        }
        else {
            i = 0;
            cout << "Стоп машина!";
        }
    }

    return 0;
}