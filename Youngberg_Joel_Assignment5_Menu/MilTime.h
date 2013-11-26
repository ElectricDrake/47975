#ifndef MILTIME_H
#define MILTIME_H

class MilTime: public Time{
private:
    int milHours;
    int milMin;
    int milSeconds;
public:
    //Exception class for invalid hour entry
    class InvalidHours
    {};

    MilTime(int h, int m, int s){
        if (h < 0 || h > 24)
            throw InvalidHours();

        milHours = h;
        milMin = m;
        milSeconds = s;
    }
    int getHour(){
        return milHours;
    }
    int getStandHr(int h){
        if(h > 12)
        return h - 12;
        else
            return h;
    }

};

#endif // MILTIME_H
