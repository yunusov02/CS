#ifndef TIME_H
#define TIME_H

class Time {
    public:
        Time(int = 0, int = 0, int = 0);

        // set functions
        void setTime(int, int, int);
        void setHour(int);
        void setMinute(int);
        void setSecond(int);

        //get functions
        int getHour() const;
        int getMinute() const;
        int getSecond() const;

        // void print (normally decalared const)
        void printUniversal() const;
        void printStandard();
    
    private:
        int hour;
        int minute;
        int second;
};

#endif