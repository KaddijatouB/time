//
// Created by Kaddijatou Baldeh on 4/20/22.
// Purpose: Implement time class methods
// Teammates: Fransiskus Agapa, Lioul Woldemariam, Peter Zheng
//
//
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using std::string;
using std::stringstream;
using std::setfill;
using std::setw;
#include "Time.h"


//default constructor, sets hour to 0, minute to 0, second to 0
Time::Time(){
    _hour = 0;
    _minute = 0;
    _second = 0;
}
//constructor with parameter hour, minute, second
Time::Time(int hour, int minute, int sec){
    _hour =  hour;
    _minute = minute;
    _second = sec;
}
// ToString method, no parameters, returns string that adds ":" between fields, add zero if field is single digit
string Time::ToString()const{
    stringstream ss;
    if (_hour < 10 || _minute < 10 || _second < 10){
        ss << setw(2) << setfill('0') << _hour << ":" << setw(2) << setfill('0') << _minute << ":" <<setw(2) << setfill('0') << _second;
    }
    else{
        ss << _hour << ":" << _minute << ":" << _second;
    }

    return ss.str();
}
//ToJSON method, no parameters, returns string that adds title to fields
string Time::ToJSON()const{

    stringstream ss;
    ss << "{\"hour\":" << _hour << ", \"minute\":" << _minute << ", \"second\":" << _second << "}";
    return ss.str();
}
// getter, no parameters, returns minute
int Time::GetMinute() const {
    return _minute;
}
// getter, no parameters, returns second
int Time::GetSecond() const {
    return _second;
}
// getter, no parameters, returns hour
int Time::GetHour() const{
    return _hour;
}
//takes in two different time and calculates the difference in seconds
//Parameters hourOne and hourTwo- the two different times being calculated
//returns value of the difference between two times
int Calculate(const Time& hourOne, const Time& hourTwo){
    int hour1, hour2, min1, min2, sec1, sec2, hourTotal1, hourTotal2;
    int cal;
    //convert hour and minute to seconds
    hour1 = hourOne.GetHour() * 3600;
    hour2 = hourTwo.GetHour() * 3600;
    min1 = hourOne.GetMinute() * 60;
    min2 = hourTwo. GetMinute() * 60;
    sec1 = hourOne.GetSecond();
    sec2 = hourTwo.GetSecond();

    //add total second of all the time
    hourTotal1 = hour1 + min1 + sec1;
    hourTotal2 = hour2 + min2 + sec2;

    //calculate the difference
    cal = hourTotal1 - hourTotal2;
    //return calculated value
     return cal;
}


