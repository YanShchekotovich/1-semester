#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	double a, b, c;
	cout << "Введите число a = ";
	cin >> a;
	cout << "Введите число b = ";
	cin >> b;
	cout << "Введите число c = ";
	cin >> c;
	if (a == b || c == b || c == a)
	{
		cout << "Парные числа есть" << endl;
	}
	else 
	{
		cout << "Парных чисел нет " << endl;
	}
}

//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//	double a, b, c;
//	cout << "Введите число a = ";
//	cin >> a;
//	cout << "Введите число b = ";
//	cin >> b;
//	cout << "Введите число c = ";
//	cin >> c;
//	(a == b || c == b || c == a) ? cout << "Парные числа есть" << endl : cout << "Парных чисел нет " << endl;
//}
//
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//	int a;
//	cout << "Хочешь выпить чашку кофе?" << endl << "1. Да, с удовольствием" << endl << "2. Нет, спасибо" << endl;
//	cin >> a;
//	switch (a)
//	{
//	case 1: cout << "Предпочитаешь капучино или латте?" << endl << "1. Капучино" << endl << "2. Латте" << endl << "3. Ничего из этого" << endl;
//		cin >> a;
//		switch (a)
//		{
//		case 1: cout << "Неплохой вариант";
//			
//		case 2: cout << "Неплохой вариант";
//			break;
//		case 3: cout << "Тогда выбери сам";
//			break;
//		default: cout << "Я не понимаю тебя";
//			break;
//		}
//		break;
//	case 2: cout << "Очень жаль";
//		break;
//	default: cout << "Я не понимаю тебя";
//		break;
//	}
//}
