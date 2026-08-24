//#include <iostream> // 2
//using namespace std;
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//	int n, b, s, p;
//	double y = 0;
//	cout << "Введите количество лет: ";
//	cin >> n;
//	cout << "Введите число %, на которое снижается цена на оборудование с каждым годом: ";
//	cin >> p;
//	cout << "Введите количество денег для закупки:" << endl;
//	for (b = 1; b <= n; b++)
//	{
//		cin >> s;
//		y = s + y - y * p / 100;
//	}
//	cout << "Общаая стоимость оборудования за " << n << " лет = " << y << endl;
// return 0;
//}

//#include <iostream> // 1
//int main() {
//	using namespace std;
//	setlocale(LC_CTYPE, "Russian");
//	double p, q;
//	int d = 0;
//	cout << "Введите сумму начальной выручки p = ";
//	cin >> p;
//	cout << "Введите значение желаемой выручки q = ";
//	cin >> q;
//	if (p >= q)
//	{
//		cout << "Некорректные данные" << endl;
//	}
//	for (d; p <= q; d++)
//	{
//		p += p * 3 / 100;
//	}
//	cout << "День: " << d << endl;
//	cout << "Значение выручки: " << p << endl;
//	return 0;
//}



#include <iostream>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    int n, result = 0, multiplier = 1;
    cout << "Введите целое число: ";
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit != 3 && digit != 6)
        {
            result += digit * multiplier;
            multiplier *= 10;
        }
        n /= 10;
    }
    if (result == 0) {
        cout << "Число без цифр 3 и 6: 0" << endl;
    }
    else {
        cout << "Число без цифр 3 и 6: " << result << endl;
    }
    return 0;
}