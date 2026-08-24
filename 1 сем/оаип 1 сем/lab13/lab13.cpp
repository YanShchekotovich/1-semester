//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//	srand(time(NULL));
//
//	int const n = 3;
//	int const m = 3;
//	int A[n][m];
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			A[i][j] = rand() % 21 - 10;
//			cout << A[i][j] << "  ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//	for (int i = 0; i < n; i++) {
//		int sum = 0, kol = 0;
//
//		for (int j = 0; j < m; j++) {
//			if (A[i][j] > 0) {
//				sum += A[i][j];
//				kol++;
//			}
//		}
//		if (kol > 0) {
//			int avg = sum / kol;
//
//			cout << "Строка " << i + 1 << ": " << endl;
//			cout << "Сумма положительных элементов: " << sum << "." << endl;
//			cout << "Количество положительных элементов: " << kol << "." << endl;
//			cout << "Среднее положительных чисел: " << avg << endl;
//			cout << endl;
//
//		}
//		else {
//			cout << "Строка " << i + 1 << ": " << endl;
//			cout << "Нет положительных элементов" << endl;
//		}
//	}
//	return 0;
//}

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));

    int const n = 3;
    int const m = 5; 

    int A[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            *(*(A + i) + j) = rand() % 21;
            cout << *(*(A + i) + j) << "  ";
        }
        cout << endl;
    }
    cout << endl;


    for (int i = 0; i < n; i++) {
        int kol = 1; 
        for (int j = 1; j < m; j++) { 
            int k;                     
            for (k = 0; k < j; k++) {
                if (*(*(A + i) + j) == *(*(A + i) + k)) {
                    break;
                }
            }
            if (k == j) {  
                kol++;
            }
        }
        cout << "Строка " << i + 1 << ": " << endl;
        cout << "Кол-во различных элементов матрицы: " << kol << "." << endl;
    }
    return 0;
}/*
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	setlocale(LC_CTYPE, "Russian");
#define n 100
	int k = 0, m = 1;
	int i = 0, j = 0, h = 0, f = 0;
	int C[n][n];
	while (i <= 0)
	{
		printf("Введите порядок массива (больше нуля): "); cin >> i;
	}
	for (m; m <= pow(i, 2);)
	{
		f = 0 + k;
		h = 0 + k;
		for (f; f < i - k && m <= pow(i, 2); f++)
		{
			*(*(C + h) + f) = m++;
		}
		f--; h++;
		for (h; h < i - k && m <= pow(i, 2); h++)
		{
			*(*(C + h) + f) = m++;
		}
		f--; h--;
		for (f; f >= 0 + k && m <= pow(i, 2); f--)
		{
			*(*(C + h) + f) = m++;
		}
		f++; h--;
		for (h; h > 0 + k && m <= pow(i, 2); h--)
		{
			*(*(C + h) + f) = m++;
		}
		k++;
	}
	printf("Итоговый массив:\n ");
	for (h = 0; h < i; h++)
	{
		cout << endl;
		for (f = 0; f < i; f++)
		{
			cout << *(*(C + h) + f) << " ";
		}
	}
}

﻿#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	setlocale(LC_CTYPE, "Russian");
#define n 100
	int k = 0, m = 1;
	int i = 0, j = 0, h = 0, f = 0, q = 0;
	int C[n][n];
	while (i <= 0)
	{
		printf("Введите порядок массива (больше нуля): "); cin >> i;
	}
	if (i % 2 == 0){
		for (h; h < i; h++){
			if (h < i / 2)	{
				for (f = 0; f < i; f++)	{
					if (f < i / 2)	{
						*(*(C + h) + f) = m++;	}
					if (f >= i / 2)	{
						*(*(C + h) + f) = --m;	}	}
				m--;
			}
			if (h >= i / 2){
				if (k == 0)	{
					m++;
					k++;	}
				for (f = 0; f < i; f++)	{
					if (f < i / 2)	{
						*(*(C + h) + f) = m++;}
					if (f >= i / 2){
						*(*(C + h) + f) = --m;
					}}
				m++;	}}
		for (h = 0; h != i; h++){
			for (f = 0; f != i; f++){
				if (*(*(C + h) + f) < 0){
					*(*(C + h) + f) = 0;}}}}
	else{
		for (h; h < i; h++){
			if (h < (i + 1) / 2){
				q = 0;
				for (f = 0; f < i; f++){
					if (f < (i + 1) / 2){
						*(*(C + h) + f) = m++;}
					if (f > (i / 2) && q == 0){
						m--;
						q++;}
					if (f > i / 2){
						*(*(C + h) + f) = --m;}}
				m--;}
			if (h >= (i + 1) / 2){
				m++;
				if (k < i / 2){
					m++;
					k++;}
				for (f = 0; f < i; f++){
					if (f < i / 2){
						*(*(C + h) + f) = m++;}
					if (f >= i / 2){
						*(*(C + h) + f) = m--;}}}}
		for (h = 0; h != i; h++){
			for (f = 0; f != i; f++){
				if (*(*(C + h) + f) < 0){
					*(*(C + h) + f) = 0;
				}}}	}
	printf("Итоговый массив:\n ");
	for (h = 0; h < i; h++)
	{
		cout << endl;
		for (f = 0; f < i; f++)
		{
			cout << *(*(C + h) + f) << " ";
		}
	}
	﻿#include <iostream>
#include <cstdlib>
#include <time.h>
		using namespace std;
	int main()
	{
		srand(time(0));
		setlocale(LC_CTYPE, "Russian");
#define n 100
		int k = 0, m = 1;
		int i = -1, j = 0, d = 0, h = 0, f = 0, p = 0, w = 0, a = 0;
		int C[n][n], LU[n][n], RD[n][n], RU[n][n], LD[n][n];
		while (i <= 0 || i % 2 != 0)
		{
			printf("Введите порядок массива (больше нуля и чётное): "); cin >> i;
		}
		for (h; h < i; h++)
		{
			for (f = 0; f < i; f++)
			{
				(f % 2 == 0) ? *(*(C + h) + f) = rand() % 10 : *(*(C + h) + f) = -9 + rand() % 10;
			}
		}
		printf("Массив:\n ");
		for (h = 0; h < i; h++)
		{
			cout << endl;
			for (f = 0; f < i; f++)
			{
				cout << *(*(C + h) + f) << " ";
			}
		}
		for (h = 0; h <= (i - 1) / 2; h++)
		{
			for (f = 0; f <= (i - 1) / 2; f++)
			{
				LU[w][a++] = *(*(C + h) + f);
			}
			a = 0;
			for (f; f != i; f++)
			{
				RU[w][a++] = *(*(C + h) + f);
			}
			w++;
			a = 0;
		}
		w = 0;
		for (h; h >= i / 2 && h != i; h++)
		{
			for (f = 0; f <= (i - 1) / 2; f++)
			{
				LD[w][a++] = *(*(C + h) + f);
			}
			a = 0;
			for (f; f != i; f++)
			{
				RD[w][a++] = *(*(C + h) + f);
			}
			w++;
			a = 0;
		}
		w = 0;
		cout << endl;
		printf(" Итоговый массив:\n ");
		for (w = 0; w < i / 2; w++)
		{
			cout << endl;
			for (a = 0; a <= (i - 1) / 2; a++)
			{
				cout << RD[w][a] << " ";
			}
			for (a = 0; a <= (i - 1) / 2; a++)
			{
				cout << LD[w][a] << " ";
			}
		}
		for (w = 0; w < i / 2; w++)
		{
			cout << endl;
			for (a = 0; a <= (i - 1) / 2; a++)
			{
				cout << RU[w][a] << " ";
			}
			for (a = 0; a <= (i - 1) / 2; a++)
			{
				cout << LU[w][a] << " ";
			}
		}
	}*/