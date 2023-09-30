#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int num;
    char f, s, l;
    cout << "Введите трехзначное число: ";
    cin >> num;
    f = num / 100;
    s = num % 100 / 10;
    l = num % 10;
    num = s * 100 + f * 10 + l;
    cout << "Число, полученное при перестановке: " << num << endl;
}