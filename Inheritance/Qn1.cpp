#include <iostream>
using namespace std;
class dimension
{
protected:
    float r, l;

public:
    void getinput()
    {
        cout << "Enter the value of radius and length " << endl;
        cin >> r >> l;
    }
};
class cylinder : public dimension
{
    float csa, tsa, vol;

public:
    void calculate()
    {
        csa = 2 * 3.14 * r * l;
        vol = 3.14 * r * r * l;
        tsa = 2 * 3.14 * r * (r + l);
    }
    void display()
    {
        cout << "The value of csa tsa and volume is" << csa << endl
             << tsa << endl
             << vol << endl;
    }
};
int main()
{
    cylinder c;
    c.getinput();
    c.calculate();
    c.display();
    return 0;
}