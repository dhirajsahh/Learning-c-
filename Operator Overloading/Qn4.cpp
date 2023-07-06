// adding two time object using operator overloading

#include <iostream>
using namespace std;
class time
{
    int hr, min, sec;

public:
    void getdata()
    {
        cout << "Enter the time in sec min hr" << endl;
        cin >> sec >> min >> hr;
    }
    time operator+(time t1)
    {
        time t3;
        t3.sec = sec + t1.sec;
        t3.min = min + t1.min + t3.sec / 60;
        t3.sec = t3.sec % 60;
        t3.hr = hr + t1.hr + t3.min / 60;
        t3.min = t3.min % 60;
        return (t3);
    }
    void display()
    {
        cout << "The time is" << endl;
        cout << "sec: " << sec << endl
             << "min: " << min << endl
             << "hr: " << hr;
    }
};
int main()
{
    time t1, t2, t3;
    t2.getdata();
    t3.getdata();
    t1 = t2 + t3;
    t1.display();
    return (0);
}