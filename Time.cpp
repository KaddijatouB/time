//
// Created by Kaddijatou Baldeh on 4/20/22.
//
#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

#include "Time.h"

Time::Time(){
    _hour = 0;
    _minute = 0;
    _second = 0;
}
Time::Time(int hour, int minute, int sec){
    _hour =  hour;
    _minute = minute;
    _second = sec;
}
string Time::ToString()const{
    stringstream ss;
    if (_hour < 10 || _minute < 10 || _second < 10){
        ss << "0";
    }
    ss <<  _hour << ":" << _minute << ":" << _second;

    return ss.str();
}
string Time::ToJSON()const{

    stringstream ss;
    ss << "{\"hour\":" << _hour << ", \"minute\":" << _minute << ", \"second\":" << _second << "}";
    return ss.str();
}
int Time::getMinute() const {
    return _minute;
}

int Time::getSecond() const {
    return _second;
}
int Time::getHour() const{
    return _hour;
}
int Calculate(const int& hours, int diffHour){

}


