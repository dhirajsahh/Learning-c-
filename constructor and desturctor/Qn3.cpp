// create a class called distance with data member feet and inch. initialize all the data member using constructor. using necessary member function wap to add two distance objects.
#include <iostream>
using namespace std;
class distance1
{
    int ft, inch;

public:
    distance1()
    {
        ft = 0;
        inch = 0;
    }
    distance1(int feet, int in)
    {
        ft = feet;
        inch = in;
    }
    void adddist(distance1 d1, distance1 d2)
    {
        inch = d1.inch + d2.inch;
        ft = d1.ft + d2.ft + inch / 12;
        inch = inch % 12;
    }
    void display()
    {
        cout << "ft=" << ft << "inch=" << inch;
    }
};
int main()
{
    distance1 d1(4, 9), d2(3, 5), d3;
    d3.adddist(d1, d2);
    d3.display();
    return 0;
}