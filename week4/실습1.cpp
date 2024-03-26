# include <iostream>
using namespace std;

int main() {
	int count = 0, i = 1;
	for (;;)
	{
		count = i + count;
		if (count >= 5050)
		{
			break;
		}
		i++;
	}
	cout << "i = " << i << ", count = " << count << endl;
}