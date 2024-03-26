#include <iostream>
using namespace std;
enum tvtype {LCD, LED, PDP, TD};
int main() {
    int type;
    cout << "Enter the type of TV : ";
    cin >> type;
    switch (type)
    {
    case LCD:   // 0
        cout << "LCD TV" << endl;
        break;
    case LED:   // 1
        cout << "LED TV" << endl;
        break;
    case PDP:   // 2
        cout << "PDP TV" << endl;
        break;
    case TD:    // 3
        cout << "TD TV" << endl;
        break;
    default:
        cout << "reselect the TV type" << endl;
    }
}