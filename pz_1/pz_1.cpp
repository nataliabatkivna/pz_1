// pz_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    system("color B0");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Прізвище 
    string last_name;
    cout << "Введіть прізвище: ";
    getline(cin, last_name);
    // Ім'я 
    string first_name;
    cout << "Введіть ім'я: ";
    getline(cin, first_name);
    // Вік 
    string age;
    cout << "Введіть вік: ";
    getline(cin, age);
    //  Місце проживання
    string residence;
    cout << "Введіть місце проживання: ";
    getline(cin, residence); 
    // Настрій
    string mood;
    cout << "Який настрій: ";
    getline(cin, mood);
    //  Колір
    string favoriteColor;
    cout << "Твій улюблений колір: ";
    getline(cin, favoriteColor);
    // Світло
    string powerOutage;
    cout << "У тебе сьогодні вимикали світло: ";
    getline(cin, powerOutage);
    // Заклад навчання
    string school;
    cout << "Введіть заклад навчання: ";
    getline(cin, school);
    // Курс 
    int age2;
    cout << "Введіть курс навчання: ";
    cin >> age2;
    // Очищення буфера псля ввиведення числа
    cin.ignore();
    // Вивід введених даних
    cout << "\nВаші дані:" << endl;
    cout << "Прізвище:" << last_name << endl;
    cout << "Ім'я:" << first_name << endl;
    cout << "Вік:" << age << endl;
    cout << "Місце проживання:" << residence << endl;
    cout << "Настрій:" << mood << endl;
    cout << "Колір:" << favoriteColor << endl;
    cout << "Світло:" << powerOutage << endl;
    cout << "Заклад навчання:" << school << endl;
    cout << "Курс:" << age2 << endl;
    return 0;
}