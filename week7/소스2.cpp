#include <iostream>
using namespace std;

int main() {
	int scores[9] = { 10, 20 };

	for (int i = 0; i < 9; i++)
	{
		cout << "scores[" << i << "] = " << scores[i] << endl;
	}

	int sum = 0;
	float avg;
	int size = sizeof(scores) / sizeof(scores[0]); // 몇칸인지 확인 (array size 확인)

	cout << "size of scores : " << sizeof(scores) << endl;
	cout << "size of scores[0] : " << sizeof(scores[0]) << endl;
	cout << "size of array : " << size << endl;


}