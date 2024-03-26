// Ex 1-1 : Size of data type
// #include <stdio.h>
#include <iostream>
using namespace std;

void main() {
	short year = 0;
	int sale = 0;
	long total_sale = 0;

	year = 10;
	sale = 200000000;
	total_sale = year * sale;

/*	printf("total_sale = %d \n", total_sale);

	printf("size of short type = %d byte \n", sizeof(short));
	printf("size of int type = %d byte \n", sizeof(int));
	printf("size of long type = %d byte \n", sizeof(long));
*/

	cout << "total sale : " << total_sale << " byte" << endl;

	cout << "size of short : " << sizeof(short) << " byte" << endl;
	cout << "size of int : " << sizeof(int) << " byte" << endl;
	cout << "size of long : " << sizeof(long) << " byte" << endl;

}