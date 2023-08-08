#include <iostream>
using namespace std;
class test
{
private:
    float ft;
    int inch;

public:
    test()
    {
        this->ft = 0;
        this->inch = 0;
    }
    test(float f, int i)
    {
        this->ft = f;
        this->inch = i;
    }
    test add(test t1, test t2)
    {
        inch = t1.inch + t2.inch;
        ft = t1.ft + t2.ft + inch / 12;
        inch = inch % 12;
        return *this;
    }
    void display()
    {
        cout << "The ft is " << ft;
        cout << "The inch is" << inch;
    }
};
int main()
{
    test t1, t2(7, 11), t3(4, 8);
    t1 = t1.add(t2, t3);
    t1.display();
    return 0;
}