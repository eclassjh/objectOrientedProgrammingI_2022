#include <iostream>
using namespace std;

int main() {
	char alphabet;
	int signal;

	cout << "Enter an alphabet : ";
	cin >> alphabet; // ����ڿ��� ���ĺ� �Է¹ޱ�

	int alphabet_to_int = alphabet; //�Է¹��� ���ĺ��� ASCII ����

	if (alphabet_to_int >= 65 && alphabet_to_int <= 90)
		signal = 0;
// �빮�� �Է¹޾��� ��� signal = 0

	else
		signal = 1;
// ������ �Է¹޾��� ��� signal = 1

	switch (signal)
	{
	case 0 :  // �빮�� �Է¹޾��� ���
		alphabet_to_int += 32; // �ҹ��ڷ� ��ȯ
		break;

	case 1: // �� ���ǰ��
		cout << "Hmm... " << endl;
		break;
	}
	char int_to_char = char(alphabet_to_int); // ASCII�� �ش��ϴ� ���ڷ� ��ȯ
	cout << " The result is : " << int_to_char << endl; // ���
	
	return 0;
}