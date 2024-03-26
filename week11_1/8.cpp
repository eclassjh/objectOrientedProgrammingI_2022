#include <iostream>
using namespace std;

enum days {SUN, MON, TUE, WED, THu, FRI, SAT};
enum carOptions {
    SunRoof = 0x01,
    Spoiler = 0x02,
    FogLights = 0x04,
    TintedWindows = 0x08,
};

int main() {
    days days1;     // 얘는 이렇게 선언해주는데
    days1 = FRI;

    int car;        // 얘는 carOptions 선언을 안해줌(안해줘도 된다고는 하네)
    car = TintedWindows;
    if (days1 == 5)
        cout << "Friday~" << endl;
    if (car == 8)
        cout << "TintedWindows" << endl;

    return 0;
}