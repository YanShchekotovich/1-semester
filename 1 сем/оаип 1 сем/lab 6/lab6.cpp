#include <iostream>   //2 
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int i = 0, a, b, c, d, s = 100;
	for (a = 0; a <= 2; a++) {     // перебираем все возможные значения
		for (b = 0; b <= 5; b++) {
			for (c = 0; c <= 20; c++) {
				for (d = 0; d <= 50; d++) {
					if (s == (a * 50 + b * 20 + c * 5 + d * 2))
						i++;
				}
			}
		}
	}
	cout << "Способов набора: " << i;;
}

//#include <iostream>  //3 
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RUS");
//	int n = 12;
//	float c1, c2;
//	cout << "Введите кол-во литров воды в первом сосуде: ";
//	cin >> c1;
//	cout << "Введите кол-во литров воды во втором сосуде: ";
//	cin >> c2;
//	if (c1 >= 1 && c2 >= 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			c1 = c1 / 2;
//			c2 = c2 + c1;
//			c2 = c2 / 2;
//			c1 = c1 + c2;
//		}
//		cout << c1 << "  " << c2;
//	}
//	else
//	{
//		cout << "Ошибка ввода данных";
//	}
//	return 0;
//}

//#include <iostream> // 1
//using namespace std;
//int main()
//{
//	int t, i = 2;
//	setlocale(LC_ALL, "RUS");
//	cout << "Введите число: ";
//	cin >> t;
//	if (t >= 2) {
//		while (i <= t)
//		{
//			if (t % i == 0)
//			{
//				cout << i;
//				t = t / i;
//				if (t > 1)
//					cout << "*";
//			}
//			else
//				i = i + 1;
//		}
//	}
//	else
//		cout << "Ошибка ввода данных";
//	return 0;
//}
