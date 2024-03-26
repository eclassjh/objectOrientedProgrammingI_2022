#include <iostream>
using namespace std;

int main() {
	int temp;
	cout << "Enter the temperature." << endl;
	cin >> temp;
	
	if (temp <= 20) 
		cout << "Oh! Damn Cool!" << endl;

	else if (temp > 20 && temp <= 30)
		cout << "Rain rain here again!" << endl;

	else if (temp > 30 && temp <= 40)
		cout << "Wish I am on Everest!" << endl;

	else
		cout << "Good old nagpur weather" << endl;
	
}