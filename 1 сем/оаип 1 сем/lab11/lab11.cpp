//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    srand(time(NULL));
//
//    int const n = 100;
//    int A[n], B[n], S[n], size;
//
//    cout << "Введите длину массива A и B: ";
//    cin >> size;
//    if (size > n) {
//        cout << "Ошибка";
//        return 0;
//    }
//
//    cout << "Массив A: " << endl;
//    for (int i = 0; i < size; i++) {
//        *(A + i) = rand() % 5;
//        cout << *(A + i) << endl;
//    }
//    
//    cout << "Масссив B: " << endl;
//    for (int i = 0; i < size; i++) {
//        *(B + i) = rand() % 5;
//        cout << *(B + i) << endl;
//    }
//
//    cout << "Массив S: " << endl;
//    for (int i = 0; i < size; i++) {
//        *(S + i) = *(A + i) + *(B + i);
//        cout << *(S + i) << endl;
//    }
//}

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    srand(time(NULL));
//
//    int const n = 100;
//    int A[n], size, a;
//
//    cout << "Введите длину массива A: ";
//    cin >> size;
//    if (size > n) {
//        cout << "Ошибка";
//        return 0;
//    }
//
//    cout << "Массив A: " << endl;
//    for (int i = 0; i < size; i++) {
//        *(A + i) = rand() % 10;
//        cout << *(A + i) << endl;
//    }
//
//    int smallest = *A;
//    for (int i = 0; i < size; i++) {
//        if (*(A+i) < smallest && *(A + i) != 0) {
//            smallest = *(A+i);
//        }
//    }
//    cout << "Наименьшее натуральное число: " << smallest;
//
//    return 0;
//}
//
//




//#include <iostream> //14
//#include <ctime>
//using namespace std;
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    srand(time(NULL));
//
//    int const n = 100;
//    int x[n], y[n], size, par = 0;
//
//    cout << "Введите длину массива x и y: ";
//    cin >> size;
//    if (size > n) {
//        cout << "Ошибка";
//        return 0;
//    }
//
//    cout << "Массив x: " << endl;
//    for (int i = 0; i < size; i++) {
//        *(x + i) = rand() % 5;
//        cout << *(x + i) << endl;
//    }
//
//    cout << "Масссив y: " << endl;
//    for (int i = 0; i < size; i++) {
//        *(y + i) = rand() % 5;
//        cout << *(y + i) << endl;
//    }
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            if (*(x + i) == *(y + j)) {
//                par++;
//            }
//        }
//    }
//    cout << "Количество одинаковых элементов: " << par << endl;
//
//    return 0;
//}

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));

    int const n = 100;
    int K[n], size, t, S[n], B[n];

    cout << "Введите длину массива K:";
    cin >> size;
    if (size > n) {
        cout << "Ошибка";
        return 0;
    }

    cout << "Массив K: " << endl;
    for (int i = 0; i < size; i++) {
        K[i] = rand() % 5;
        cout << K[i] << endl;
    }
    cout << "Введите t: ";
    cin >> t;

    int sIndex = 0;
    int bIndex = 0;

    for (int i = 0; i < size; i++) {
        if (K[i] > t) {
            B[bIndex] = K[i];
            bIndex++;
        }
        else {
            S[sIndex] = K[i];
            sIndex++;
        }
    }

    cout << "Преобразованный массив K: " << endl;
    for (int i = 0; i < sIndex; i++) {
        cout << S[i] << endl;
    }
    for (int i = 0; i < bIndex; i++) {
        cout << B[i] << endl;
    }

    return 0;
}

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    srand(time(NULL));
//
//    int const n = 100;
//    int K[n], size, t, S[n], B[n];
//
//    cout << "Введите длину массива K:";
//    cin >> size;
//    if (size > n) {
//        cout << "Ошибка";
//        return 0;
//    }
//
//    cout << "Массив K: " << endl;
//    for (int i = 0; i < size; i++) {
//        K[i] = rand() % 5;
//        cout << K[i] << endl;
//    }
//    cout << "Введите t: ";
//    cin >> t;
//
//    int sIndex = 0;
//    int bIndex = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (K[i] > t) {
//            B[bIndex] = K[i];
//            bIndex++;
//        }
//        else {
//            S[sIndex] = K[i];
//            sIndex++;
//        }
//    }
//
//    cout << "Преобразованный массив K: " << endl;
//    for (int i = 0; i < sIndex; i++) {
//        cout << S[i] << endl;
//    }
//    for (int i = 0; i < bIndex; i++) {
//        cout << B[i] << endl;
//    }
//
//    return 0;
//}