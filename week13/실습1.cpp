#include <iostream>
using namespace std;

int main() {

	char* pc = NULL; // ������ ���� ����

//	pc = (char*)malloc(sizeof(char)); // C��� (�����ڷ�)
	pc = new char[1]; // ���� �޸� �Ҵ�
	if (pc == NULL) // �޸� �Ҵ翡 �����ϸ� error��� �� ���μ��� ����
	{
		cout << "MEMORY ALLOCATION ERROR" << endl;
		exit(1);
	}
	* pc = 'm'; // �Ҵ�� �޸𸮿� 'm' ����
	cout << "*pc = " << *pc << endl;
	delete(pc); // ���̻� �ʿ� ���� ��� �Ҵ�� �޸� ����
	
	return 0;
}
