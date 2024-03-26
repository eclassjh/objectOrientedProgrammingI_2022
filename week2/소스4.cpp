// Ex3 : symbolic constant using const keyword

# include <iostream>
using namespace std;

int main() {
	const double TAX_RATE = 0.15;
	double income, salary;

	cout << "insert your salary" << endl;
	cin >> salary;

	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;


}