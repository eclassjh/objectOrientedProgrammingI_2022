#include <iostream>
using namespace std;

int add(int x, int y); //function prototype

int main() {
	int x, y;
	cout << " enter x" << endl;
	cin >> x;
	cout << " enter y" << endl;
	cin >> y;
	cout << "x + y = " << add(x, y) << endl;
	}

int add(int x, int y) {
	return(x + y);
}