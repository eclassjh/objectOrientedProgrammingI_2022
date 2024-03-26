# include <iostream>
using namespace std;

int main() {
	int i = 1;
	int sum = 0;
	for(;;)
	//while (true)
	{
		sum += i;
		if (sum >= 5050) break;
		i++;
	}
	cout << "i = " << i << endl;
	return 0;
}