//#include <iostream>
//using namespace std;
//
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//
//	const int size = 25;
//	char str[size];
//	int n, k;
//
//	cout << "Введите строку (латиницей): ";
//	cin.getline(str, size); //  считает строку и сохраняет в символьный массив (str - указатель на символьный массив, а size макс. кол-во символов)
//
//	cout << "Введите позицию n: ";
//	cin >> n;
//
//	cout << "Введите длину подстроки k: ";
//	cin >> k;
//
//	char substring[size]; // для хранения подстроки
//	int subIndex = 0; 
//
//	for (int i = n; i < n + k; i++) { // запись каждого символа в массив 
//		substring[subIndex] = str[i];
//		subIndex++;
//	}
//
//	cout << "Подстрока S1: ";
//	for (int i = 0; i < k; i++) {
//		cout << substring[i];
//	}
//
//	return 0;
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//
//    string inputString; // хранить введенную строку 
//    cout << "Введите строку, состоящую из групп нулей и единиц: ";
//    cin >> inputString;
//
//    char *currentGroupStart = &inputString[0]; // указатель на inputString
//    int shortestGroupLength = 0; // длина самой короткой группы 
//    int currentGroupLength = 1; // длина текущей группы
//
//     перебор символов строки
//    for (char *ptr = &inputString[0]; *ptr != '\0'; ptr++) {
//        if (*ptr == *(ptr + 1)) {
//            currentGroupLength++;
//        }
//        else {
//            if (shortestGroupLength == 0 || currentGroupLength < shortestGroupLength) {
//                shortestGroupLength = currentGroupLength;
//            }
//            currentGroupLength = 1;
//        }
//    }
//
//    cout << "Самая короткая группа состоит из " << shortestGroupLength << " символов." << std::endl;
//
//    return 0;
//}
//
//
//
//
//
//
//
//


//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);


#include <iostream>
#include <sstream>
#include <Windows.h>

using namespace std;

// 1.	В заданной последовательности слов найти все слова, имеющие заданное окончание.
void dop_1()
{
	char s[255], m[10], a[80], * p;
	int i, k, len, z, c, v;
	cout << "Введите слова: ";
	gets_s(s);
	cout << "Введите окончание: ";
	gets_s(m); cout << "\n";
	len = strlen(s);
	i = 0;

	while (i < len)
	{
		while (s[i] == ' ' && i < len) i++;
		k = 0;
		while (s[i] != ' ' && i < len)
			a[k++] = s[i++];
		a[k] = '\0';
		p = strstr(a, m);
		if (p) cout << a << "\n";
		i++;
	}
}

// 4.	Отредактировать заданное предложение, удаляя из него все слова с нечетными номерами и переворачивая слова с четными номерами. Пример: HOW DO YOU DO преобразовать в OD OD.
void dop_2()
{
	char arr[256];
	int i, j, size, z = 0, a = 0, b;
	puts("Введите предложение: ");
	gets_s(arr);
	size = strlen(arr);
	arr[size] = ' ';
	for (i = 0; i <= size; i++)
	{
		if (arr[i] == ' ')
		{
			z++;
			if (z % 2 == 0)
			{
				b = i;
				for (j = b - 1; j > a; j--)
					cout << arr[j];
				cout << " ";
			}
			else a = i;

		}
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	dop_1();
	dop_2();
}