// Create a class called time having data member hr,min,sec.Initialize all the data member using constructor and use the necessary member function to add two time object and display the result in main()
#include <iostream>
using namespace std;
class time
{
    int hr, min, sec;

public:
    time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    time(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    time addtime(time t1, time t2)
    {
        time temp;
        temp.sec = t1.sec + t2.sec;
        temp.min = t1.min + t2.min + temp.sec / 60;
        temp.sec = temp.sec % 60;
        temp.hr = t1.hr + t2.hr + temp.min / 60;
        temp.min = temp.min % 60;
        return temp;
    }
    void display()
    {
        cout << "sec =" << sec << endl
             << "min=" << min << endl
             << "hr=" << hr;
    }
};
int main()
{
    time t1, t2(8, 50, 10), t3(5, 20, 55), t4;
    t4 = t1.addtime(t2, t3);
    t4.display();
    return 0;
}