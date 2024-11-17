#include <iostream>
#include <ctime>

#include "Time.h"

using namespace std;

Time::Time() {
    time_t current_time = time(NULL);

    tm *time_local = localtime(&current_time);
    hour = time_local->tm_hour;
    minute = time_local->tm_min;
    second = time_local->tm_sec;

}

void Time::display() {
    cout << "Current Time is: " << hour << ":" << minute << ":" << second << endl;
}

