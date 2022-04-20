//
// Created by Kaddijatou Baldeh on 4/20/22.
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
    int getSecond() const;
    int getHour() const;
    string ToString()const;
    string ToJSON()const;
    int getMinute() const;
    int Calculate(const int& hours, int diffHour);

};


#endif //TIME_TIME_H
