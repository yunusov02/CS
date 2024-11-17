#ifndef TIME_H

#define TIME_H

class Time {
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(int = 1, int = 0, int = 0);
        void setTime(int h, int m, int s);
        void setHour(int h);
        void setMinute(int m);
        void setSecond(int s);
        void incrementSecond(int value);
        void incrementMinute(int value);
        void incrementHour(int value);
        void displayTime();
}   

#endif