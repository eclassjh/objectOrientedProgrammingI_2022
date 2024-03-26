#include <iostream>
using namespace std;

int main() {

	int scores[5] = { 0 };
	int sum = 0;
	float avg;
/*	for (int i = 0; i < 5; i++)
	{
		cout << "scores[" << i << "] = " << scores[i] << endl;

	}
싹 0으로 초기화 됨.
*/
	scores[3] = 30;
	for (int i = 0; i < 5; i++)
	{
		cout << "enter the " << i+1 << "th score : ";
		cin >> scores[i];
		sum += scores[i];
		cout << "scores[" << i << "] = " << scores[i] << endl;

	}
	avg = (float)sum / 5; // or avg = sum / 5.0 (하지만 개수라서 물리적 논리 x)
	cout << "sum = " << sum << endl;
	cout << "avg = " << avg << endl;

}