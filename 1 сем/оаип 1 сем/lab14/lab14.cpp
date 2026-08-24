//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    srand(time(NULL));
//
//    int n;
//    cout << "Введите размер массива: ";
//    cin >> n;
//
//    int* A = (int*)malloc(n * sizeof(int)); // используем функцию malloc для выделения памяти
//    /*int* A = new int[n];*/
//
//    cout << "Массив A" << endl;
//    for (int i = 0; i < n; i++) {
//        A[i] = rand() % 21 - 10;
//        cout << A[i] << endl;
//    }
//
//    int k = -1;
//    for (int i = 0; i < n; i++) {
//        if (A[i] < 0) {
//            k = i;
//        }
//    }
//
//    if (k != -1) {
//        cout << "В массиве есть отрицательные элементы." << endl;
//        cout << "Наибольшее значение k, при котором A[k] < 0: " << k << endl;
//    }
//    else {
//        cout << "В массиве нет отрицательных элементов." << endl;
//    }
//
//    free(A); // используем функцию free для освобождения памяти, выделенной malloc
//
//    /*delete[] A;*/
//    return 0;
//}
//
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//	srand(time(NULL));
//
//	int rows, columns;
//	cout << "Введите размер строки: ";
//	cin >> rows;
//
//	cout << "Введите размер колонки: ";
//	cin >> columns;
//
//	int** arr = new int* [rows]; // создаем массив указателей 
//
//	for (int i = 0; i < rows; i++) {
//		arr[i] = new int[columns];
//	}
//
//	int max_i = 0, max_j = 0;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < columns; j++) {
//			arr[i][j] = rand() % 101;
//			if (arr[i][j] > arr[max_i][max_j]) { // поиск макс элемента 
//				max_i = i;
//				max_j = j;
//			}
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	int maxr = 0; // строки 
//	int maxc = 0; // колонки
//	int max = arr[0][0];
//
//	for (int i = 0; i < rows; i++) { // меняем первую строку с элементом arr[maxr][j]
//		for (int j = 0; j < columns; j++) {
//			if (arr[i][j] > max) {
//				max = arr[i][j];
//				maxr = i;
//				maxc = j;
//			}
//		}
//	}
//
//	for (int j = 0; j < columns; j++) {  // меняем первую строку с элементом arr[maxr][j]
//		int temp = arr[0][j];
//		arr[0][j] = arr[maxr][j];
//		arr[maxr][j] = temp;
//	}
//
//
//	for (int i = 0; i < rows; i++) {  // меняет первый столбец с элементом arr[i][maxc]
//		int temp = arr[i][0];
//		arr[i][0] = arr[i][maxc];
//		arr[i][maxc] = temp;
//	}
//
//
//	cout << "Матрица с наибольшим элементом в верхнем левом углу: " << endl;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < columns; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//	for (int i = 0; i < rows; i++) {
//		delete[] arr[i];
//	}
//
//	delete[] arr;
//
//	return 0;
//}

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    srand(time(NULL));
//
//    int string, colona;
//    cout << "Введите размер строки: ";
//    cin >> string;
//
//    cout << "Введите размер колонки: ";
//    cin >> colona;
//
//    int** arr = new int* [string]; // создаем массив указателей 
//
//    for (int i = 0; i < string; i++) {
//        arr[i] = new int[colona];
//    }
//
//    bool allstringHaveZero = true; // флаг, указывающий, имеются ли нулевые элементы во всех строках
//
//    for (int i = 0; i < string; i++) {
//        bool stringHasZero = false; // флаг, указывающий, имеется ли нулевой элемент в текущей строке
//        for (int j = 0; j < colona; j++) {
//            arr[i][j] = rand() % 201-100;
//            cout << arr[i][j] << " ";
//            if (arr[i][j] == 0) {
//                stringHasZero = true;
//            }
//        }
//        cout << endl;
//
//        if (!stringHasZero) {
//            allstringHaveZero = false;
//        }
//    }
//
//    if (!allstringHaveZero) {
//        cout << "Не все строки матрицы содержат хотя бы один нулевой элемент." << endl;
//        cout << "Заменяем все отрицательные элементы матрицы на нулевые." << endl;
//
//        for (int i = 0; i < string; i++) {
//            for (int j = 0; j < colona; j++) {
//                if (arr[i][j] < 0) {
//                    arr[i][j] = 0;
//                }
//            }
//        }
//
//        cout << "Измененная матрица:" << endl;
//
//        for (int i = 0; i < string; i++) {
//            for (int j = 0; j < colona; j++) {
//                cout << arr[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//    else {
//        cout << "Все строки матрицы содержат хотя бы один нулевой элемент." << endl;
//    }
//
//    for (int i = 0; i < string; i++) {
//        delete[] arr[i];
//    }
//    delete[] arr;
//
//    return 0;
//}
#include <iostream> 
#include <ctime> 
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));
    int n, c;
    cout << "Введите размер массива: ";
    cin >> n;

    double* A = (double*)malloc(n * sizeof(double)); // используем функцию malloc для выделения памяти 
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int kol = 0;
    cout << "Введите С: ";
    cin >> c;

    double b = A[0];
    double x = 0;

    bool otric = false;

    for (int i = 0; i < n; i++) {
        if (A[i] < c) {
            kol++;
        }

        if (A[i] < b) {
            b = A[i];
        }

        if (otric) {
            x += A[i]; 
        }

        if (A[i] < 0) {
            otric = true;
        }

    }

    cout << "количество элементов массива, меньших с: " << kol << endl;
    cout << "сумма: " << x;

    free(A);
}

//
//#include <iostream> 
//#include <ctime> 
//using namespace std;
//int main() {
//
//setlocale(LC_ALL, "RUS");
//const int N = 3;
//int mas[N][N];
//int i, j;
//srand((unsigned)time(NULL));
//int rmn = -3, rmx = 8;
//srand(time(NULL));
//cout << "Матрица: " << endl;
//for (i = 0; i < N; i++)
//{
//	for (j = 0; j < N; j++)
//	{
//		mas[i][j] = (int)(((double)rand() /
//			(double)RAND_MAX) * (rmx - rmn) + rmn);
//		cout << mas[i][j] << "\t";
//	}
//	cout << "\n";
//}
//cout << "\n";
//int len = 0;
//for (int i = 0; i < N; i++)
//{
//	int k = 0;
//	for (int j = 0; j < N; j++) //оператор перебору елементов
//		if (mas[i][j] == 0)  //если встречаетса нулевое
//			k++;  //увеличиваем
//	if (k > 0)       //если в строке есть 0
//		len++;    //тогда увеличиваем число строк в которих есть 0
//}
//if (len > 0)
//{
//	cout << "Кол-во строк с 0-элементом: " << len;
//}
//else {
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (mas[i][j] < 0)
//			{
//				mas[i][j] = 0;
//			}
//			cout << mas[i][j] << "\t";
//		}
//		cout << "\n";
//	}
//}
//}
//
//#include <iostream>
//using namespace std;
//// Функция для вычисления минимального элемента в одномерном массиве
//float findMin(float* arr, int n) {
//	float minElement = arr[0];
//	for (int i = 1; i < n; i++) {
//		if (arr[i] < minElement) {
//			minElement = arr[i];
//		}
//	}
//	return minElement;
//}
//
//// Функция для вычисления суммы элементов между первым и последним положительными элементами
//float findSum(float* arr, int n) {
//	int firstPositiveIndex = -1;
//	int lastPositiveIndex = -1;
//	float sum = 0;
//
//	for (int i = 0; i < n; i++) {
//		if (arr[i] > 0) {
//			if (firstPositiveIndex == -1) {
//				firstPositiveIndex = i;
//			}
//			lastPositiveIndex = i;
//		}
//	}
//
//	if (firstPositiveIndex != -1 && lastPositiveIndex != -1) {
//		for (int i = firstPositiveIndex + 1; i < lastPositiveIndex; i++) {
//			sum += arr[i];
//		}
//	}
//
//	return sum;
//}
//
//int main() {
//
//	setlocale(LC_CTYPE, "Russian");
//	int n;
//	cout << "Введите количество элементов в массиве: ";
//	cin >> n;
//
//	// Выделяем память под массив
//	float* arr = (float*)malloc(n * sizeof(float));
//
//	std::cout << "Введите элементы массива:\n";
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	// Вычисляем минимальный элемент и сумму элементов между первым и последним положительными элементами
//	float minElement = findMin(arr, n);
//	float sum = findSum(arr, n);
//
//	cout << "Минимальный элемент: " << minElement << endl;
//	cout << "Сумма элементов между первым и последним положительными элементами: " << sum << endl;
//
//	// Освобождаем память, выделенную под массив
//	free(arr);
//
//	return 0;
//}
// 
//#include <iostream>
//using namespace std;
//int main() {
//    int rows, cols;
//    setlocale(LC_CTYPE, "Russian");
//    // Ввод размеров матрицы
//    cout << "Введите количество строк: ";
//    cin >> rows;
//
//    cout << "Введите количество столбцов: ";
//    cin >> cols;
//
//    // Создание двумерного динамического массива
//    int** matrix = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        matrix[i] = new int[cols];
//    }
//
//    // Ввод элементов матрицы
//    cout << "Введите элементы матрицы:" << endl;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    // Поиск строки с отрицательным элементом
//    int rowNumber = -1;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if (matrix[i][j] < 0) {
//                rowNumber = i;
//                break;
//            }
//        }
//        if (rowNumber != -1) {
//            break;
//        }
//    }
//
//    // Если найдена строка с отрицательным элементом
//    if (rowNumber != -1) {
//        // Уменьшение вдвое элементов столбца с номером rowNumber
//        for (int i = 0; i < rows; ++i) {
//            matrix[i][rowNumber] /= 2;
//        }
//
//        // Вывод измененной матрицы
//        cout << "Измененная матрица:" << endl;
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//               cout << matrix[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//    else {
//        cout << "В матрице нет строки с отрицательным элементом." << endl;
//    }
//
//    // Освобождение памяти, занятой массивом
//    for (int i = 0; i < rows; ++i) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//
//    return 0;
//}