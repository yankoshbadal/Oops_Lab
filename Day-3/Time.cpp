#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes;
public:

    Time() {
    }

    Time(int hours, int minutes) {
        setTime(hours, minutes);
        cout <<"Time : " << this->hours << " hr " << this->minutes << " min " << " is created" << endl;
    }

    void setTime(int hours, int minutes) {
        this->hours = hours;
        this->hours += minutes / 60;

        this->minutes = minutes % 60;
    }

    int getHours() {
        return this->hours;
    }
    int getMinutes() {
        return this->minutes;
    }

    void displayData() {
        cout << "Hours: " << this->hours << ", " << "Minutes: " << this->minutes << endl;
    }

    ~Time() {
        cout <<"Time : " << this->hours << " hr " << this->minutes << " min " << " is destroyed" << endl;
    } 
};

int main() {
    {
        Time *t1 = new Time(1, 70);
        delete t1;
    } 
    {
        Time *t2 = new Time(3, 20);
        delete t2;
    }
    {
        Time *t3 = new Time(4, 30);
        delete t3;
    }

    return 0;
}