#include <iostream>
using namespace std;

int main() {
	int i;
	int* pd;
	pd = &i; // error! �������� Ÿ���� double ������ i�� Ÿ���� int�̱⿡ ������ �߻���
	// i �Ǵ� pd�� data type�� �ٲپ� ���� ���Ѿ� ��
	*pd = 36.5;

	cout << "i = " << i << endl;
	cout << "*pd = " << *pd << endl;

	return 0;
}

