#include <iostream>
#include <iomanip> 
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char b, space; space = ' ';
	cout << "Введите символ ";
	cin >> b;
	cout << setw(40) << setfill(space) << space;
	cout << setw(2) << setfill(b) << b << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(6) << setfill(b) << b << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(10) << setfill(b) << b << endl;
	cout << setw(34) << setfill(space) << space;
	cout << setw(14) << setfill(b) << b << endl;
	cout << setw(32) << setfill(space) << space;
	cout << setw(18) << setfill(b) << b << endl;
	cout << setw(30) << setfill(space) << space;
	cout << setw(22) << setfill(b) << b << endl;
	cout << setw(28) << setfill(space) << space;
	cout << setw(26) << setfill(b) << b << endl;
	cout << setw(26) << setfill(space) << space;
	cout << setw(30) << setfill(b) << b << endl;
	cout << setw(24) << setfill(space) << space;
	cout << setw(34) << setfill(b) << b << endl;

	cout << setw(30) << setfill(space) << space;
	cout << setw(22) << setfill(b) << b << endl;
	cout << setw(30) << setfill(space) << space;
	cout << setw(22) << setfill(b) << b << endl;
	cout << setw(30) << setfill(space) << space;
	cout << setw(22) << setfill(b) << b << endl;
	cout << setw(30) << setfill(space) << space;
	cout << setw(22) << setfill(b) << b << endl;
	cout << setw(30) << setfill(space) << space;
	cout << setw(22) << setfill(b) << b << endl;
	cout << setw(30) << setfill(space) << space;
	cout << setw(12) << setfill(b) << b;
	cout << setw(5) << setfill(space) << space;
	cout << setw(5) << setfill(b) << b << endl;
	cout << setw(30) << setfill(space) << space;
	cout << setw(12) << setfill(b) << b;
	cout << setw(5) << setfill(space) << space;
	cout << setw(5) << setfill(b) << b << endl;
	cout << setw(30) << setfill(space) << space;
	cout << setw(22) << setfill(b) << b << endl;






}