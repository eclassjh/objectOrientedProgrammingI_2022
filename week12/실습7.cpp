#include <iostream>
using namespace std;

void addmult(int a, int b, int* sum, int* mult) { 
	// pointer�� �̿��Ͽ� 2�� �̻��� return���� ��ȯ�ϴ� �Լ� ���� // call by reference
	*sum = a + b;
	*mult = a * b;
	cout << "addmult()'s sum = " << *sum << ", mult = " << *mult << endl;
}
void addmult_not_pointer(int a, int b, int sum, int mult) { 
	// pointer ������ ���� 2�� �̻��� return���� ��ȯ�ϵ��� �ϴ� �Լ� ���� �õ� // call by value
	sum = a + b;
	mult = a * b;
	cout << "addmult()'s sum = " << sum << ", mult = " << mult << endl;
	cout << "addmult_not_pointer()'s sum address = " << &sum << ", mult address = " << &mult << endl;
}

int main() {
	int x = 10, y = 20;
	int s, m;
	float s_not_pointer = 0, m_not_pointer = 0;

	addmult(x, y, &s, &m);
	cout << "main()'s sum = " << s << ", mult = " << m << endl; // addmult ���ο��� ������ ���� return�Ǿ� main�Լ����� ����� ���� ������
	cout << "main()'s sum address = " << &s << ", mult address = " << &m << endl;

	cout << "---------------------------------------"<< endl;
	cout << "not pointer" << endl;
	addmult_not_pointer(x, y, s_not_pointer, m_not_pointer); 
	// addmult_not_pointer �ȿ��� ����� ������ main�Լ����� ������ ��ġ�� ������ Ȯ��
	cout << "main()'s sum = " << s_not_pointer << ", mult = " << m_not_pointer << endl;
	cout << "main()'s sum address = " << &s_not_pointer << ", mult address = " << &m_not_pointer << endl;

	return 0;
}
