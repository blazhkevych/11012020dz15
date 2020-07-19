/*
*** Пользователь 	вводит с клавиатуры размер одного 	фильма в гигабайтах и скорость 	интернет - соединения в битах в секунду.Посчитать, за сколько часов, минут и 	секунд скачается фильм.
*/

#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double gb, bit;
	cout << "Введите размер фильма(Gb): ";
	cin >> gb;
	cout << "Введите скорость интернет-соединения(Mbit/s): ";
	cin >> bit;
	gb = gb * 1024 * 8;
	gb /= bit;
	int hours = gb / 3600;
	int min = gb / 60 - hours * 60;
	int sec = gb - min * 60 - hours * 3600;
	cout << hours << " часов " << min << " минут " << sec << " секунд" << endl;
	return 0;
}
