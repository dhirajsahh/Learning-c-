#include <iostream>
using namespace std;
class time
{
    int sec, min, hr, day;

public:
    void input()
    {
        cout << "Enter the sec time hr and day";
        cin >> sec >> min >> hr >> day;
    }
    time addtime(time t1, time t2)
    {
        time t3;
        t3.sec = t1.sec + t2.sec;
        t3.min = t1.min + t2.min + t3.sec / 60;
        t3.sec = t3.sec % 60;
        t3.hr = t1.hr + t2.hr + t3.min / 60;
        t3.min = t3.min % 60;
        t3.day = t1.day + t2.day + t3.hr / 24;
        t3.hr = t3.hr % 60;
        return t3;
    }
    void display()
    {
        cout << "The time is" << endl;
        cout << "day:" << day << endl;
        cout << "hr:" << hr << endl;
        cout << "min:" << min << endl;
        cout << "sec:" << sec << endl;
    }
};
int main()
{
    time t1, t2, t3, t4;
    t1.input();
    t2.input();
    t4 = t3.addtime(t1, t2);
    t4.display();
}