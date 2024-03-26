# include <iostream>
using namespace std;

int main() {
	float y = 6.5e2; // 6.5 *10^2

	cout << "y = " << y << endl; // 650
	cout << scientific << "y = " << y << endl; // 6.500000e+02


}