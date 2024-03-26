# include <iostream>
using namespace std;

int main() {

	int c = 3;

	switch (c) {
	case'v' :
		cout << "I am in case 'V'" << endl;
		break;
	case 3 :
		cout << "I am in case 3" << endl;
		break;
	case 12:
		cout << "I am in case 12" << endl;
		break;
	default :
		cout << "I am a default" << endl;
		break;
	}
}