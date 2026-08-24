//#include <iostream>
//using namespace std;
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//
//	char tmp[33];
//	int A;  // 38      (00100110)
//	int B;  // 19      (00010011)
//	int mask = 124; // (01111100)
//
//	cout << "Введите число A: ";
//	cin >> A;
//	_itoa_s(A, tmp, 2);
//	cout << "Число A в двоичном виде: " << tmp << endl;
//
//	cout << "Введите число B: ";
//	cin >> B;
//	_itoa_s(B, tmp, 2);
//	cout << "Число B в двоичном виде: " << tmp << endl;
//
//	A = A & mask; //     (00100100)
//	A = A << 1; //       (01001000)
//	mask = mask << 1;//  (11111000) 
//	mask = mask >> 5;//  (00000111)
//	B = B & mask; //     (00000011)
//	B = B | A; //        (01001011)
//
//	_itoa_s(B, tmp, 2);
//	cout << "Измененное число B в двоичном виде: " << tmp << endl;
//	cout << "B: " << B << endl;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_CTYPE, "Russian");
// 
//	char tmp[33];
//	int A;  // 38      (00100110)
//	int p = 2, n = 3, mask = 0, formask = 1;;
//
//	cout << "Введите число A: ";
//	cin >> A;
//	_itoa_s(A, tmp, 2);
//	cout << "Число A в двоичном виде: " << tmp << endl;
//
//	for (int i = 0; i < 3; i++) // устанавливаем биты, соответствующие указанным позициям
//	{
//		mask = mask | formask; 
//		mask = mask <<  1;
//	} // (00001110) 
//
//	mask = mask >> 1; // (00000111) 
//	A = A | mask;// (00100111)
//
//	_itoa_s(A, tmp, 2);
//	cout << "Измененное число A в двоичном виде: " << tmp << endl;
//	cout << "A: " << A << endl;
//
//	return 0;
//}







//#include <iostream>   // 6 
//using namespace std;
//int main() {
//
//	setlocale(LC_CTYPE, "Russian");
//	char tmp[33];
//	int A, ch, n;
//	cout << "Введите число A: ";
//	cin >> A;
//	_itoa_s(A, tmp, 2); // возвращает кол-во символов
//	cout << "Число A в двоичном виде: " << tmp << endl;
//	ch = strlen(tmp);
//	n = 2;
//	for (int i = ch; i >= 0; i--)
//	{
//		if (i == (ch - n))
//		{
//			tmp[i] = '1';
//			n = n + 2;
//		}
//	}
//	_itoa_s(A, tmp, 2);
//	cout << "Измененное число A в двоичном виде: " << tmp << endl;
//	cout << "A: " << A << endl;
//	return 0;
//}

//#include <iostream>   
//using namespace std;
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//	char tmp[33];
//	int A, B, maskA, m , n;
//	cout << "Введите n и m" << endl;
//	cin >> n >> m;
//	cout << "Введите число А и число B" << endl;
//	cin >> A >> B;
//	_itoa_s(A, tmp, 2);
//	cout << "Число А в двоичном виде: " << tmp << endl;
//	maskA = (A >> n) & 7;
//	_itoa_s(B, tmp, 2);
//	cout << "Число B в двоичном виде: " << tmp << endl;
//	_itoa_s(B | (maskA << m), tmp, 2);
//	cout << "Измененное число B:" << tmp << endl;
//  return 0;
//}  


//#include <iostream>  // 16
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RUS");
//	char tmp[33];
//	int B, A, A_mask = 07; // 00000111
//	cout << "Введите число A: ";
//	cin >> A;
//	cout << "Введите число B: ";
//	cin >> B;
//	
//	_itoa_s(A, tmp, 2);
//	cout << "Представление числа в двоичном коде: " << tmp << endl;
//	
//	_itoa_s(B, tmp, 2);
//	cout << "Представление числа в двоичном коде: " << tmp << endl;
//	
//	A >>= 1;
//	A &= A_mask;
//	B <<= 3;
//	B |= A;
//
//	cout << "Число B = " << B << endl;
//	_itoa_s(B, tmp, 2);
//	cout << "Измененное число B в двоичном виде:  " << tmp << endl;
//	return 0;
//}
//
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    int A, position = 4, n, razn;
    char tmp[33];
    cout << "Введите A ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Представление числа в двоичном коде: " << tmp << endl;
    cout << "Введите число битов ";
    cin >> n;
    razn = position - n; // разность между позицией и количеством битов
    while (position >= razn)
    {
        A |= 12 << position; // операция сдвига числа на позицию
        _itoa_s(A, tmp, 2);
        position--;
    }
    cout << tmp << endl;
}

//#include <iostream> // 9
//using namespace std;
//int main(){
//
//	setlocale(LC_ALL, "RUS");
//	int A;
//	int A_mask = 07; 
//	int B;
//	char tmp[33];
//	cout << "Введите число A: ";
//	cin >> A;
//	cout << "Введите число B: ";
//	cin >> B;
//	cout << " " << endl;
//	cout << "Число A: " << A << endl;
//	_itoa_s(A, tmp, 2);
//	cout << "Представление числа в двоичном коде: " << tmp << endl;
//	cout << " " << endl;
//	cout << "Число B: " << B << endl;
//	_itoa_s(B, tmp, 2);
//	cout << "Представление числа в двоичном коде: " << tmp << endl;
//	A >>= 2;
//	A &= A_mask;
//	B <<= 5;
//	B |= A;
//	B <<= 1;
//	cout << " " << endl;
//	cout << "Число B = " << B << endl;
//	_itoa_s(B, tmp, 2);
//	cout << "Представление числа в двоичном коде: " << tmp << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	int A, n, p; char num[33];
//	cout << "Введите число А ";
//	cin >> A;
//	cout << endl;
//	_itoa_s(A, num, 2);
//	cout << "Число в двоичном виде = " << num << endl;
//	cout << " " << endl;
//	cout << "Введите c какого бита начинать замену ";
//	cin >> p;
//	cout << endl;
//	cout << "Скольно заменяем битов? ";
//	cin >> n;
//	cout << endl;
//	_itoa_s(A, num, 2);
//	cout << "Число А в двоичном  виде: " << num << endl;
//	unsigned int mask = 1 << p - 1;
//	for (int i = 0; i <= n; i++) {
//		A ^= mask;
//		mask <<= 1;
//	}
//	_itoa_s(A, num, 2);
//	cout << "Итоговое число: " << num << endl;
//}