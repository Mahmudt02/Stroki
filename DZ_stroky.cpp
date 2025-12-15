#include <iostream>
#include <string>
#include <clocale>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    string name;
    string surname;

    cout << "Введите имя: ";
    cin >> name;

    cout << "Введите фамилию: ";
    cin >> surname;

    cout << "Здравствуйте, " << name << " " << surname << "!" << endl;

    return 0;
}

