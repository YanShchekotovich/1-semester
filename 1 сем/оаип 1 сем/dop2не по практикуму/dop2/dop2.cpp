////3
//#include <iostream>
//using namespace std;
//int main()
//{
//	double d, x=4.5, z=1.5e-6, f, i=-6;
//	d = tan(-x * i) / sqrt(x - z);
//	f = sin(2 * d) / d;
//	cout << d << endl << f;
//}

////4
//#include <iostream>
//using namespace std;
//int main() {
//	double t = 6, y = -1.2, x = 0.4e+6,p,q;
//	p = 2.6 * t + cos(y / (3 * x + y));
//	q = sin(t) / cos(t);
//	cout << p << endl << q;
//}

//5
#include <iostream>
using namespace std;
int main()
{
	double w, v, b = 40, x = 1.1, a = 5e-6;
	w = (a + b) * tan(x / (x + 1));
	v = 1 / 2 * b - sqrt(w - a * b);
	cout << w << endl << v;
}