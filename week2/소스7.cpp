//Ex 6-1 : significant digits

# include <iostream>
using namespace std;

int main() {
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	cout << "size of float = " << sizeof(float) << endl;
	cout << "size of double = " << sizeof(double) << endl;

	cout << fixed; // �ڸ��� ����
	cout.precision(20); // ��°�ڸ����� ��� �� ������

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;


}