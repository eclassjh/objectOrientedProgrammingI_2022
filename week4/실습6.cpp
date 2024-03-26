# include <iostream>
using namespace std;

int main() {
	int ch = 'b'; // a = 97, b = 98

	switch (ch) {
		case 'b' :
			cout << "b as in bag" << endl;
			break;
		case 'B' :
			cout << "You entered B" << endl;
			break;
		case 'A' : 
			cout << "a as in ashar" << endl;
			break;
		case 'b' + 'a' :
			cout << "You entered a and b" << endl;
	}
}