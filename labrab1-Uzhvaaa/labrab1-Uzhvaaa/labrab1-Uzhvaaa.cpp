#include <iostream>
using namespace std;

void func1() {
	float celc;
	float fareng;
	cout << "Введите градусы по Цельсию:" << endl;
	cin >> celc;
	fareng = celc * 9 / 5 + 32;
	cout << " Градус Цельсия переведённый в Фаренгейт:" << fareng << endl;
}

void func2() {
	int a, b, c, d, diviser, denominator;
	char blank;
	cout << "Введите первую дробь: " << endl;
	cin >> a >> blank >> b;
	cout << "Введите вторую дробь: "<< endl;
	cin >> c >> blank >> d;
	diviser = a * d + b * c;
	denominator = b * d;
	cout << "результат суммы: " << diviser <<"/"<<denominator<< endl;
}

void func3() {
	float shilling, pens, pound, result;
	cout << "Введите количество фунтов: " << endl;
	cin >> pound;
	cout << "Введите количество шиллингов: " << endl;
	cin >> shilling;
	cout << "Введите количество пенсов: " << endl;;
	cin >> pens;
	result = shilling / 20 + pens / 20 / 12 + pound;
	result = int(result * 100) / 100.0;
	cout << "Десятичных фунтов: "<< result << endl;
}

void func4() {
	float dePounds, deFract;
	int pounds, shilling, pens;
	cout << "\nВведите десятичные фунты: " << endl;
	cin >> dePounds;
	pounds = static_cast<int>(dePounds);
	deFract = dePounds - pounds;
	shilling = deFract * 20;
	pens = deFract * 12;
	cout << "\nСтарых фунтов:" << pounds << "." << shilling << "." << pens << endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	int chse;
	while (true) {
		cout << "\n" << "Выберите задание:" << endl;
		cout << "-1-" << endl << "-2-" << endl << "-3-" << endl << "-4-" << endl << "Выход" << endl;;
		cin >> chse;
		switch (chse) {
		case 1: {
			func1();
			break;
		}
		case 2: {
			func2();
			break;
		}
		case 3: {
			func3();
			break;
		}
		case 4: {
			func4();
		}
		default:
			return 0;
		}
	}
}