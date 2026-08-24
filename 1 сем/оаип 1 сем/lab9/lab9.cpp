//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//	srand(time(NULL));
//	const int n = 100;
//	int i, size, L[n], K[n], M[n], ch = 0, nch = 0;
//	cout << "Введите размер массива (не более " << n << "): ";
//    cin >> size;
//	if (size > n) {
//		cout << "Размер массива превышает максимальное значение " << n << endl;
//		return 0;
//	}
//	cout << "Массив K: ";
//	for (i = 0; i < size; i++) {
//		K[i] = rand() % 100;
//		cout << K[i] << " ";
//	}
//	for (i = 0; i < size; i++) {
//		if (K[i] % 2 == 0) {
//			L[ch] = K[i];
//			ch++;
//		}
//		else {
//			M[nch] = K[i];
//			nch++;
//		}
//	}
//	cout << endl << "Массив L: ";
//	for (i = 0; i < ch; i++) {
//		cout << L[i] << " ";
//	}
//	cout << endl << "Массив M: ";
//	for (i = 0; i < nch; i++) {
//		cout << M[i] << " ";
//	}
//	cout << endl << "Количество четных элементов: " << ch << endl;
//	cout << "Количество нечетных элементов: " << nch << endl;
//  return 0;
//}

#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	srand(time(NULL));
	const int n = 100;
	int size, K[n], k, last = 0;
	cout << "Введите размер массива (не более " << n << "): ";
	cin >> size;
	if (size > n) {
		cout << "Размер массива превышает максимальное значение " << n << endl;
		return 0;
	}

	cout << "Массив K: ";
	for (int i = 0; i < size; i++) {
		K[i] = rand() % 99;
		cout << K[i] << " ";
	}
	
	cout << endl << "Введите кол-во позиций для сдвига вправо: ";
	cin >> k;

	for (int j = 0; j < k; j++) {
		last = K[size - 1];  // последний элемент
		for (int i = size - 1; i > 0; i--)
			K[i] = K[i - 1];
		K[0] = last;
	}

	cout << "Массив после циклического сдвига на " << k << " позиции вправо: ";
	for (int i = 0; i < size; i++)
		cout << K[i] << " ";
	cout << endl;
	return 0;
}