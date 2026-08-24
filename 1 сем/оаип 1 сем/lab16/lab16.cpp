#include <iostream>
using namespace std;

void search(int*, int*, int*, int&, double&);

int main() {
    setlocale(LC_CTYPE, "Russian");
    int n, k;

    cout << "Введите размер массива: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Введите элемент массива [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Введенный массив: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Введите k: ";
    cin >> k;
    int maxNum = 0;
    double ch = 0;
    search(arr, &n, &k, maxNum, ch);
    cout << ch;
    delete[] arr;

    return 0;
}

void search(int* arr, int* pn, int* pk, int & maxNum, double &ch) {
    int maxCount = 0;
    for (int i = 0; i < (*pn); i++) {
        if (*(arr + i) > maxCount) {
            maxCount = *(arr + i);
        }
    }

    int* counter = new int[maxCount + 1]();  // cоздаем массив счетчиков и инициализируем его нулями

    for (int i = 0; i < (*pn); i++) {
        counter[*(arr+i)]++;
    }

    while ((*pk) > 0) {
        int maxCh = 0; // макс частота
        int maxNum = 0; // макс число

        for (int i = 0; i <= maxCount; i++) {
            if (counter[i] > maxCh) {
                maxCh = counter[i];
                maxNum = i;
            }
        }

        double ch = ((double)maxCh / (*pn)) * 100;
        cout << "Число: " << maxNum << ", Частота: " << ch << "%" << endl;

        counter[maxNum] = 0;
        (*pk)--;
        
    }

    delete[] counter;
}



//#include <iostream>
//using namespace std;
//
//int zeroRow(int** arr, int row, int column);
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//
//    int row, column;
//
//    cout << "Введите размер строки: ";
//    cin >> row;
//    cout << "Введите размер колонки: ";
//    cin >> column;
//
//    int** arr = new int* [row];
//
//    for (int i = 0; i < row; i++) {
//        arr[i] = new int[column];
//    }
//
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            cout << "Введите элемент массива [" << i << "][" << j << "]: ";
//            cin >> arr[i][j];
//        }
//    }
//
//    cout << "Исходный массив: " << endl;
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            cout << arr[i][j];
//        }
//        cout << endl;
//    }
//
//    int count = 0;
//    count = zeroRow(arr, row, column);
//    cout << "Количество строк, содержащих нулевые элементы: " << count;
//
//    for (int i = 0; i < row; i++) {
//        delete[] arr[i];
//    }
//    delete[] arr;
//
//    return 0;
//}
//
//int zeroRow(int** arr, int row, int column) {
//
//    int count = 0;
//    for (int i = 0; i < row; i++) {
//        bool hasZero = false;
//        for (int j = 0; j < column; j++) {
//            if (arr[i][j] == 0) { //если trur, то hasZero увелич. на 1
//                hasZero = true;
//                break;
//            }
//        }
//        if (hasZero) {
//            count++;
//        }
//    }
//
//    return count;
//}

//
//#include <iostream>
//using namespace std;
//void main()
//{
//    setlocale(LC_CTYPE, "Russian");
//    const int maxSize = 100;
//    int n, i, a[maxSize], kmax = 0, kmin = 0, indexs, minindex, maxindex;
//    cout << "Введите размер массива" << endl;
//    cin >> n;
//    if (n > 100)
//        return;
//    srand((unsigned)time(NULL));
//    for (i = 0; i < n; i++) {
//        a[i] = rand() % 100;
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    for (i = 1; i < n; i++)
//        if (a[i] > a[kmax]) {
//            kmax = i;
//            maxindex = i;
//        }
//        else if (a[i] < a[kmin]) {
//            kmin = i;
//            minindex = i;
//        }
//    cout << "Максимальный элемент " << a[kmax] << endl;
//
//    cout << "Минимальный элемент " << a[kmin] << endl;
//    indexs = a[minindex];
//    a[minindex] = a[maxindex];
//    a[maxindex] = indexs;
//    cout << "\nМаксимальный индекс: " << maxindex << endl;
//    cout << "\nМинимальный индекс: " << minindex << endl;
//
//    cout << "Сумма минимального и максимального";
//    int sum = a[kmin] + a[kmax];
//    cout << sum;
//}

//#include <iostream>
//using namespace std;
//void main() {
//        const int rows = 3;
//        const int cols = 4;
//        int matrix[rows][cols] = { {-1, 2, 3, -4},
//                                  {5, -6, 7, -8},
//                                  {-9, 10, 11, 0} };
//        bool containsZero = false;
//
//        for (int i = 0; i < rows; ++i) {
//            bool hasZero = false;
//            for (int j = 0; j < cols; ++j) {
//                if (matrix[i][j] == 0) {
//                    hasZero = true;
//                    containsZero = true;
//                }
//            }
//            if (!hasZero) {
//                for (int j = 0; j < cols; ++j) {
//                    if (matrix[i][j] < 0) {
//                        matrix[i][j] = 0;
//                    }
//                }
//            }
//        }
//
//        if (!containsZero) {
//            for (int i = 0; i < rows; ++i) {
//                for (int j = 0; j < cols; ++j) {
//                    if (matrix[i][j] < 0) {
//                        matrix[i][j] = 0;
//                    }
//                }
//            }
//        }
//
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                cout << matrix[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
////
////////1. Мы начинаем с объявления матрицы matrix размера 3x4 и инициализации её значениями.
////////
////////2. Затем мы создаем переменную containsZero для отслеживания того, содержит ли хотя бы одна строка нулевой элемент.
////////
////////3. Далее мы проходимся по каждой строке матрицы во внешнем цикле.Во внутреннем цикле мы проверяем каждый элемент строки на равенство нулю.
//////// Если элемент равен нулю, мы устанавливаем флаг hasZero в значение true и обновляем переменную containsZero.
////////
////////4. После того, как мы проверили все элементы строки на наличие нуля, проверяем значение hasZero.
//////// Если в строке не было нулевых элементов, мы снова проходимся по строке и заменяем все отрицательные элементы на нули.
////////
////////5. После завершения проверки каждой строки, мы снова проверяем переменную containsZero.
//////// Если все строки не содержат нулевых элементов, мы проходимся по всей матрице и заменяем все отрицательные элементы на нули.
////////
////////6. Наконец, мы выводим измененную матрицу на экран.
////////
////////Таким образом, данный код проверяет, содержат ли строки матрицы хотя бы один нулевой элемент, 
//////// и в зависимости от этого либо заменяет отрицательные элементы на нули в строках, либо проходит по всей матрице и выполняет аналогичное действие.
//////////