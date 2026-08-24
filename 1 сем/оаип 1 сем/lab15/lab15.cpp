//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//void ex1(int**, int, int);
//
//
//
//void ex2(char* str) {
//	for (int i = 0; i < 100; i++) {
//		unsigned char c = str[i];
//		if (c >= 192 && c <= 255) { 
//			str[i] = towupper(c); 
//		}
//		else if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') { 
//			str[i] = '?'; 
//		}
//	}
//}
//
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int choise;
//	cout << "Выберите задание (1 или 2): ";
//	cin >> choise;
//
//	switch (choise) {
//	case 1: {
//
//		int row, column;
//
//		cout << "Введите размер строки: ";
//		cin >> row;
//		cout << "Введите размер колонки: ";
//		cin >> column;
//		
//		int** arr = new int* [row];
//
//		for (int i = 0; i < row; i++) { 
//			arr[i] = new int[column];
//		}
//
//		for (int i = 0; i < row; i++) {
//			for (int j = 0; j < column; j++) {
//				cout << "Введите элемент массива [" << i << "][" << j << "]: ";
//				cin >> arr[i][j];
//			}
//		}
//
//		cout << "Исходный массив: " << endl;
//		for (int i = 0; i < row; i++) {
//			for (int j = 0; j < column; j++) {
//				cout << arr[i][j];
//			}
//			cout << endl;
//		}
//
//		ex1(arr, row, column);
//
//		cout << "Преобразованный массив: " << endl;
//		for (int i = 0; i < row; i++) {
//			for (int j = 0; j < column; j++) {
//				cout << arr[i][j];
//			}
//			cout << endl;
//		}
//
//		for (int i = 0; i < row; i++) {
//			delete[] arr[i];
//		}
//		delete[] arr;
//		break;
//	}
//	case 2: {
//		char str[100];
//		cout << "Введите предложение: ";
//		cin.ignore(); // очистка ввода перед вызовом функции getline
//		cin.getline(str, 100); // считывает строку из ввода пользователя и сохраняет ее в переменной str
//
//		ex2(str);
//
//		cout << "Результат: " << str << endl;
//
//		break;
//	}
//
//	default: 
//		cout << "Error";
//		break;
//	}
//return 0;
//}
//void ex1(int** arr, int row, int column) {
//	for (int i = 0; i < row; i++) {
//		if (arr[i][0] != 0) {
//			for (int j = 0; j < column; j++) {
//				arr[i][j] = arr[i][j] + 1;
//			}
//		}
//	}
//}
//
//
//#include <iostream> 
//#include <ctime> 
//using namespace std;
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    srand(time(NULL));
//    int n, c;
//    cout << "Введите размер массива: ";
//    cin >> n;
//
//    double* A = (double*)malloc(n * sizeof(double)); // используем функцию malloc для выделения памяти 
//    for (int i = 0; i < n; i++)
//    {
//        cin >> A[i];
//    }
//    int kol = 0;
//    cout << "Введите С: ";
//    cin >> c;
//
//    double b = A[0];
//    double x = 0;
//
//    bool otric = false;
//
//    for (int i = 0; i < n; i++) {
//        if (A[i] < c) {
//            kol++;
//        }
//
//        if (A[i] < b) {
//            b = A[i];
//        }
//
//        if (otric) {
//            x += A[i];
//        }
//
//        if (A[i] < 0) {
//            otric = true;
//        }
//
//    }
//
//    cout << "количество элементов массива, меньших с: " << kol << endl;
//    cout << "сумма: " << x;
//
//    free(A);
//}

//#include <iostream>
//using namespace std;
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    const int size = 10; // Размер массива
//    double arr[size] = { 1, -2, 3, -4, 5, -6, 7, 10, 9, -10 }; // Вещественный массив
//
//    double C = 0; // Заданное число
//    int count = 0; // Количество элементов больше C
//    double proizv = 1; // Произведение элементов после максимального элемента
//
//    double maxElement = arr[0]; // Первый элемент массива по умолчанию
//    int maxIndex = 0; // Индекс максимального элемента
//
//    for (int i = 0; i < size; i++) {
//        // Поиск максимального элемента
//        if (abs(arr[i]) > abs(maxElement)) {
//            maxElement = arr[i];
//            maxIndex = i;
//        }
//
//        // Подсчет количества элементов больше C
//        if (arr[i] > C) {
//            count++;
//        }
//    }
//
//    // Подсчет произведения элементов после максимального элемента
//    for (int i = maxIndex + 1; i < size; i++) {
//        proizv *= arr[i];
//    }
//
//    // Вывод результатов
//    cout << "Количество элементов больших " << C << ": " << count << endl;
//    cout << "Произведение элементов после максимального по модулю элемента: " << proizv << endl;
//
//    return 0;
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    string input; // Входная строка
//    cout << "Введите строку: ";
//    getline(cin, input);
//
//    string output; // Результирующая строка
//
//    // Проход по каждому символу входной строки
//    for (char c : input) {
//        if (c >= 'a' && c <= 'z') {
//            // Преобразование строчной буквы в заглавную и добавление к результирующей строке
//            char uppercase = c - 32;
//            output += uppercase;
//        }
//        else if (c == ' ') {
//            // Если достигнут первый пробел, выход из цикла
//            break;
//        }
//        else {
//            // Добавление символа к результирующей строке без изменений
//            output += c;
//        }
//    }
//
//    // Вывод результирующей строки
//    cout << "Результирующая строка: " << output << endl;
//
//    return 0;
//}
//
//#include<iostream> 
//
//void subtractPreviousRow(int** array, int n)
//{
//    for (int i = 1; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            array[i][j] -= array[i - 1][j];
//        }
//    }
//
//
//    for (int j = 0; j < n; j++) {
//        array[0][j] -= array[n - 1][j];
//    }
//}
//
//int findSumOfNumbers(const char* str)
//{
//    int sum = 0;
//    int num = 0;
//
//    while (*str) {
//        if (*str >= '0' && *str <= '9') {
//            num = num * 10 + (*str - '0');
//        }
//        else {
//            sum += num;
//            num = 0;
//        }
//        str++;
//    }
//
//    sum += num;
//
//    return sum;
//}
//
//int main()
//{
//    int n;
//    std::cout << "Введите размерность массива: ";
//    std::cin >> n;
//
//
//    int** array = new int* [n];
//    for (int i = 0; i < n; i++) {
//        array[i] = new int[n];
//    }
//
//    std::cout << "Введите элементы массива:" << std::endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            std::cin >> array[i][j];
//        }
//    }
//
//    int choice;
//    std::cout << "Выберите операцию: " << std::endl;
//    std::cout << "1. Вычесть из каждой строки предыдущую." << std::endl;
//    std::cout << "2. Найти сумму чисел в строке." << std::endl;
//    std::cin >> choice;
//
//    switch (choice) {
//    case 1:
//        subtractPreviousRow(array, n);
//
//
//        std::cout << "Получившийся массив:" << std::endl;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                std::cout << array[i][j] << " ";
//            }
//            std::cout << std::endl;
//        }
//
//        break;
//
//    case 2:
//        std::cin.ignore();
//
//        char str[100];
//        std::cout << "Введите строку: ";
//        std::cin.getline(str, 100);
//
//        int sum = findSumOfNumbers(str);
//        std::cout << "Сумма чисел в строке: " << sum << std::endl;
//
//        break;
//
//    default:
//        std::cout << "Неверный выбор операции." << std::endl;
//        break;
//    }
//
//
//    for (int i = 0; i < n; i++) {
//        delete[] array[i];
//    }
//    delete[] array;
//
//    return 0;
//}



#include<iostream> 

void subtractPreviousRow(int** array, int n)
{
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] -= array[i - 1][j];
        }
    }


    for (int j = 0; j < n; j++) {
        array[0][j] -= array[n - 1][j];
    }
}

int findSumOfNumbers(const char* str)
{
    int sum = 0;
    int num = 0;

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            num = num * 10 + (*str - '0');
        }
        else {
            sum += num;
            num = 0;
        }
        str++;
    }

    sum += num;

    return sum;
}

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int n;
    std::cout << "Введите размерность массива: ";
    std::cin >> n;


    int** array = new int* [n];
    for (int i = 0; i < n; i++) {
        array[i] = new int[n];
    }

    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> array[i][j];
        }
    }

    int choice;
    std::cout << "Выберите операцию: " << std::endl;
    std::cout << "1. Вычесть из каждой строки предыдущую." << std::endl;
    std::cout << "2. Найти сумму чисел в строке." << std::endl;
    std::cin >> choice;

    switch (choice) {
    case 1:
        subtractPreviousRow(array, n);


        std::cout << "Получившийся массив:" << std::endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << array[i][j] << " ";
            }
            std::cout << std::endl;
        }

        break;

    case 2:
        std::cin.ignore();

        char str[100];
        std::cout << "Введите строку: ";
        std::cin.getline(str, 100);

        int sum = findSumOfNumbers(str);
        std::cout << "Сумма чисел в строке: " << sum << std::endl;

        break;

   
    }

    for (int i = 0; i < n; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}