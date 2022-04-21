//
// Created by Kaddijatou Baldeh on 4/20/22.
// Purpose: Declare time class to use in setting time and computing differences in time
// Teammates: Fransiskus Agapa, Lioul Woldemariam, Peter Zheng
//
#include <iostream>
#include <string>

using std::string;

#ifndef TIME_TIME_H
#define TIME_TIME_H


class Time {
private:
    int _hour;
    int _minute;
    int _second;
public:
    Time();
    Time(int hour, int minute, int sec);
    int GetSecond() const;
    int GetHour() const;
    string ToString()const;
    string ToJSON()const;
    int GetMinute() const;
};
int Calculate(const Time& hourOne, const Time& hourTwo);

#endif //TIME_TIME_H
