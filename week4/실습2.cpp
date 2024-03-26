# include <iostream>
# include <iomanip>
# include <Math.h>

using namespace std;

int main() {
	//int i = 22;
	int a = 1, b = 3; 
	int a1 = 1, a2 = 1, a3 = 1, a4 = 1, a5 = 1;
	int c1, c2, c3, c4, c5, c6;

	c1 = a + b;
	c2 = a - b;
	c3 = a * b;
	c4 = a / b;
	c5 = a % b;
	c6 = pow(2, 10);
	a1 += b;
	a2 -= b;
	a3 *= b;
	a4 /= b;
	a5 %= b;

	cout << setw(3) << "c1 = " << c1 << setw(3) << " c2 = " << c2 << setw(3) << " c3 = " << c3 << setw(3) << " c4 = " << c4 << setw(3) << " c5 = " << c5 << setw(3) << " c6 = " << c6 << setw(3) << endl;
	cout << setw(3) << "a1 = " << a1 << setw(3) << " a2 = " << a2 << setw(3) << " a3 = " << a3 << setw(3) << " a4 = " << a4 << setw(3) << " a5 = " << a5 << setw(3) <<  endl;
	 
}