#include <iostream>
using namespace std;
class length;
class breadth
{
    int b;
    friend int area(length, breadth);

public:
    void input()
    {
        cout << "Enter the length";
        cin >> b;
    }
};
class length
{
    int l;
    friend int area(length, breadth);

public:
    void input()
    {
        cout << "enter the breadth";
        cin >> l;
    }
};
int area(length l1, breadth b1)
{
    int area = l1.l * b1.b;
    return area;
}
int main()
{
    length l;
    breadth b;
    l.input();
    b.input();
    int c3 = area(l, b);
    cout << c3;
}
