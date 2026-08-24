//#include <iostream> //  6
//using namespace std;
//
//double f1(double x);
//double f2(double x);
//double dih(double(*f) (double), double a, double b, double e);
//
//double f1(double x) {
//    return (2 - pow(x, 2) + x); // первое уравнение
//}
//
//double f2(double x) {
//    return (pow(sin(x), 2)+0.2); // второе уравнение
//}
//
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    double a, b, e;
//    cout << "введите a: ";
//    cin >> a;
//
//    cout << "введите b: ";
//    cin >> b;
//
//    cout << "введите e: ";
//    cin >> e;
//
//    cout << "корень решения методом дихотомии первого уравнения: " << dih(f1, a, b, e) << endl;
//    cout << "корень решения методом дихотомии второго уравнения: " << dih(f2, a, b, e) << endl;
//
//    return 0;
//}
//
//double dih(double(*f) (double), double a, double b, double e) {
//    while (abs(a - b) > 2 * e)
//    {
//        double x = (a + b) / 2;
//        if (f(x) * f(a) <= 0) {
//            b = x;
//        }
//
//        else {
//            a = x;
//        }
//
//    }
//    return (a + b) / 2;
//}

//#include <iostream>
//#include <cstdarg>
//using namespace std;
//
//int fsum(int count, ...) {
//    int sum = 0;
//
//    va_list args;
//    va_start(args, count);
//
//    int prev = va_arg(args, int);
//
//    for (int i = 1; i < count; ++i) {
//
//        int current = va_arg(args, int);
//        if (i % 2 == 0) {
//            sum += prev * current;
//        }
//        else {
//            sum -= prev * current;
//        }
//        prev = current;
//    }
//
//    va_end(args);
//    return sum;
//}
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//
//    int res1 = fsum(3, 3, 3, 3);
//    int res2 = fsum(4, 2, 3, 4, 6);
//    int res3 = fsum(6, 3, 3, 3, 4, 2, 5);
//
//    cout << "Результат1: " << res1 << endl;
//    cout << "Результат2: " << res2 << endl;
//    cout << "Результат3: " << res3 << endl;
//    return 0;
//}


#include <iostream> // 4
#include <math.h>
using namespace std;

double f1(double x);
double f2(double x);
double dih(double(*f) (double), double a, double b, double e);

double f1(double x) {
    return (pow(x, 3) + (2*x) - 1); // первое уравнение
}

double f2(double x) {
    return (exp(x)-2); // второе уравнение
}


int main() {
    setlocale(LC_CTYPE, "Russian");
    double a, b, e;
    cout << "Введите a: ";
    cin >> a;

    cout << "Введите b: ";
    cin >> b;

    cout << "Введите e: ";
    cin >> e;

    cout << "Корень решения методом дихотомии первого уравнения: " << dih(f1, a, b, e) << endl;
    cout << "Корень решения методом дихотомии второго уравнения: " << dih(f2, a, b, e) << endl;

    return 0;
}

double dih(double(*f) (double), double a, double b, double e) {
    while (abs(a - b) > 2 * e)
    {
        double x = (a + b) / 2;
        if (f(x) * f(a) <= 0) {
            b = x;
        }

        else {
            a = x;
        }
    }
    return (a + b) / 2;
}


//#include <iostream>
//#include <cstdarg>
//using namespace std;
//
//int mn(int count, ...) {
//	va_list args;
//	va_start(args, count);
//
//	int max = va_arg(args, int);
//
//	for (int i = 1; i < count; ++i) {
//		int current = va_arg(args, int);
//		if (current > max) {
//			max = current;
//		}
//	}
//
//	va_end(args);
//	return max;
//}
//
//int main() {
//	int result1 = mn(3, 7, 12, 5);
//	int result2 = mn(4, 50, 30, 5, 10);
//	int result3 = mn(6, 8, 6, 20, 15, 10, 18);
//
//	cout << "Результат1: " << result1 << endl;
//	cout << "Результат2: " << result2 << endl;
//	cout << "Результат3: " << result3 << endl;
//
//	return 0;
//}



//#include <iostream> //  1
//using namespace std;
//
//double f1(double x);
//double f2(double x);
//double dih(double(*f) (double), double a, double b, double e);
//
//double f1(double x) {
//    return (pow(x, 2) + (4*x) - 2); // первое уравнение
//}
//
//double f2(double x) {
//    return (sin(x) + 0.1); // второе уравнение
//}
//
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    double a, b, e;
//    cout << "Введите a: ";
//    cin >> a;
//
//    cout << "Введите b: ";
//    cin >> b;
//
//    cout << "Введите e: ";
//    cin >> e;
//
//    cout << "Корень решения методом дихотомии первого уравнения: " << dih(f1, a, b, e) << endl;
//    cout << "Корень решения методом дихотомии второго уравнения: " << dih(f2, a, b, e) << endl;
//
//    return 0;
//}
//
//double dih(double(*f) (double), double a, double b, double e) {
//    while (abs(a - b) > 2 * e)
//    {
//        double x = (a + b) / 2;
//        if (f(x) * f(a) <= 0) {
//            b = x;
//        }
//
//        else {
//            a = x;
//        }
//
//    }
//    return (a + b) / 2;
//}


//#include <iostream>
//#include <cstdarg>
//using namespace std;
//
//int fm(int count, ...) {
//	va_list args;
//	va_start(args, count);
//	int min = va_arg(args, int);
//	for (int i = 1; i < count; ++i) {
//		int current = va_arg(args, int);
//		if (current < min) {
//			min = current;
//		}
//	}
//	va_end(args);
//	return min;
//}
//
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//	int res1 = fm(3, 3, 3, 3);
//	int res2 = fm(4, 2, 3, 2, 6);
//	int res3 = fm(6, 3, 3, 3, 4, 1, 5);
//
//	cout << "Результат1: " << res1 << endl;
//	cout << "Результат2: " << res2 << endl;
//	cout << "Результат3: " << res3 << endl;
//
//	return 0;
//}