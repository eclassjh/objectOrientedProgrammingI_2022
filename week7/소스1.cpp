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
�� 0���� �ʱ�ȭ ��.
*/
	scores[3] = 30;
	for (int i = 0; i < 5; i++)
	{
		cout << "enter the " << i+1 << "th score : ";
		cin >> scores[i];
		sum += scores[i];
		cout << "scores[" << i << "] = " << scores[i] << endl;

	}
	avg = (float)sum / 5; // or avg = sum / 5.0 (������ ������ ������ �� x)
	cout << "sum = " << sum << endl;
	cout << "avg = " << avg << endl;

}