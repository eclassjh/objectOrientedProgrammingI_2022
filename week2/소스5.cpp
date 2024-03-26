// Ex4 : symbolic constant using const keyword

# include <iostream>
using namespace std;

int main() {
	const double TAX_RATE = 0.15;
	double income, salary;

	cout << "insert your salary" << endl;
	cin >> salary;

	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;

	TAX_RATE = 0.20; // TAX_RATE는 상수로 선언되어있어 값을 바꿀 수 없음
	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;

}