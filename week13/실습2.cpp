#include <iostream>
using namespace std;

int main(void)
{
	char* pc = NULL; // ������ ���� ����
	int i = 0; // ���� ����

	//pc = (char*)malloc(100 * sizeof(char)); // C��� (�����ڷ�)
	pc = new char[100]; // ���� �޸� �Ҵ�

	if (pc == NULL){ // �޸� �Ҵ翡 �����ϸ�
		cout << "memory error" << endl;
			exit(1); // ���� ��� �� ���μ��� ����
	}

	for (i = 0; i < 26; i++){ // ���ĺ� 26���� �޸𸮿� ����
		* (pc + i) = 'a' + i;
	}

	* (pc + i) = 0;  // �޸� �������ڸ��� NULL ����

	cout << pc << endl;
	cout << "*pc = " << *pc << endl;    // ���̻� �ʿ����� ���� ��� �Ҵ�� �޸� ����

	delete[] pc;
	return 0;
}
