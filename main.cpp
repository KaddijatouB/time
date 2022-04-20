#include <iostream>


#include "Time.h"

using std::cout;
using std::endl;

int main() {
    Time p;
    Time t(5,6,8);

    cout << p.ToString() << endl;
    cout << t.ToString() << endl;
    cout << p.ToJSON() << endl;
    cout << t.ToJSON() << endl;

    p.getHour();
    p.getMinute();
    p.getSecond();

    return 0;
}
