#include <iostream>
using namespace std;

void today(int x, int y, int z);

int main() {
	int d, m, y;
	cout << "enter today/s data. (dd/mm/yy)" << endl;
	cin >> d >> m >> y;
	today(d, m, y);
	
}

void today(int x, int y, int z) {
	cout << "Today is 20" << z << " - " << y << " - " << x;
}