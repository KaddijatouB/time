//
// Created by Kaddijatou Baldeh on 4/20/22.
// Purpose: test time class use in setting time and computing differences in time
// Teammates: Fransiskus Agapa, Lioul Woldemariam, Peter Zheng
//
//

#include <iostream>
#include "Time.h"

using std::cout;
using std::endl;

int main() {
    Time p;//default constructor gets called
    Time t(5,3,8);// constructor with parameterS gets called
    Time m(7,30,45);
    //test getters
    cout << p.GetHour() << "," << p.GetMinute() << "," << p.GetSecond() << endl;
    cout << t.GetHour() << "," << t.GetMinute() << "," << t.GetSecond() << endl;
    cout << endl;
    //test to string
    cout << p.ToString() << endl;
    cout << t.ToString() << endl;
    cout << m.ToString() << endl;
    cout << endl;
    //test toJson
    cout << m.ToJSON() << endl;
    cout << t.ToJSON() << endl;
    cout << endl;
    //test calculate
    Time j(1,30,5);
    Time k(1,57,0);
    cout << "Time difference in second: " << Calculate(p,m) << endl;
    cout << "Time difference in second: " << Calculate(k,j) << endl;
    cout << endl;

    return 0;
}
