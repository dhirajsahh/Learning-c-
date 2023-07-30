#include <iostream>
using namespace std;
class test
{

    int x, y;

public:
    test()
    {
        this->x = 0;
        this->y = 0;
    }
    test(int x1, int y1)
    {
        this->x = x1;
        this->y = y1;
    }
    void display()
    {
        cout << "The value of x  is " << this->x << " and y is  " << this->y << endl;
    }
};
int main()
{
    test t1;
    test t2(4, 5);
    t1.display();
    t2.display();
    return 0;
}