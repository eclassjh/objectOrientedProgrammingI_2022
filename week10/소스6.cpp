#include <iostream>
using namespace std;

union ip_address {
	unsigned long laddr;
	unsigned char saddr[4];
};

int main(void)
{
	union ip_address addr; // union 생략가능

	addr.saddr[0] = 1; //01
	addr.saddr[1] = 0; //00
	addr.saddr[2] = 0; //00
	addr.saddr[3] = 127; //7f (127은 16진수로 7f임)
	// 1byte = 8 bit -> 4 bit (2*4=16) : 16진수 2개로 표현
	// saddr -> 7f 00 00 01

	cout << "addr.saddr address = " << addr.saddr << endl;
	cout << "addr.saddr[0] address = " << addr.saddr[0] << endl;
	cout << hex << "addr.laddr (hex) = " << addr.laddr << endl; // 16진수로 print
	cout << dec << "addr.laddr (dec) = " << addr.laddr << endl; // 10진수로 print

}
