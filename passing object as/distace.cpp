#include <iostream>
#include <conio.h>
using namespace std;
class distance1
{
    int ft, in;

public:
    void getdata()
    {
        cout << "Enter the ft and inch" << endl;
        cin >> ft >> in;
    }
    void calft(distance1 d1, distance1 d2)
    {
        in = d1.in + d2.in;
        ft = d1.ft + d2.ft + in / 12;
        in = in % 12;
    }
    void display()
    {
        cout << "the ft is: " << ft << endl
             << "The inch is " << in;
    }
};
int main()
{
    distance1 d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d1.display();
    d2.display();
    d3.calft(d1, d2);
    d3.display();
    getch();
    return (0);
}