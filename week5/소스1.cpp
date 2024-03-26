#include <iostream>
using namespace std;

float add(float x, float y); //function prototype
float square(float x);

int main() {
	/*int x, y;
	cout << " enter x" << endl;
	cin >> x;
	cout << " enter y" << endl;
	cin >> y; */
	float x = 10.5, y = 5;
	cout << "x + y = " << add(x, y) << endl;
	cout << "x ^ 2 = " << square(x) << endl;
}

float add(float x, float y) {
	return(x + y);
} // function definition

float square(float x) {
	return(x * x);
}