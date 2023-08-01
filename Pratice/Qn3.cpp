// Write a prograrn to add two time objeets using operator cverlcading.
#include <iostream>
using namespace std;
class time1
{
    int hr, min, sec;

public:
    void getinput()
    {
        cout << "Enter the value of sec min and hr" << endl;
        cin >> sec >> min >> hr;
    }
    void display()
    {
        cout << "The time is" << endl;
        cout << "hr= " << hr << endl
             << "min= " << min << endl
             << "sec= " << sec << endl;
    }
    friend time1 operator+(time1, time1);
};
time1 operator+(time1 t1, time1 t2)
{
    time1 temp;
    temp.sec = t1.sec + t2.sec;
    temp.min = t1.min + t2.min + temp.sec / 60;
    temp.sec = temp.sec % 60;
    temp.hr = t1.hr + t2.hr + temp.min / 60;
    temp.min = temp.min % 60;
    return temp;
}
int main()
{
    time1 t1, t2, t3;
    t1.getinput();
    t2.getinput();
    t3 = t1 + t2;
    t3.display();
    return 0;
}