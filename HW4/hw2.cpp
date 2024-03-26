#include <iostream>
using namespace std;

int main() {
	char alphabet;
	int signal;

	cout << "Enter an alphabet : ";
	cin >> alphabet; // 사용자에게 알파벳 입력받기

	int alphabet_to_int = alphabet; //입력받은 알파벳의 ASCII 저장

	if (alphabet_to_int >= 65 && alphabet_to_int <= 90)
		signal = 0;
// 대문자 입력받았을 경우 signal = 0

	else
		signal = 1;
// 나머지 입력받았을 경우 signal = 1

	switch (signal)
	{
	case 0 :  // 대문자 입력받았을 경우
		alphabet_to_int += 32; // 소문자로 전환
		break;

	case 1: // 그 외의경우
		cout << "Hmm... " << endl;
		break;
	}
	char int_to_char = char(alphabet_to_int); // ASCII에 해당하는 문자로 전환
	cout << " The result is : " << int_to_char << endl; // 출력
	
	return 0;
}