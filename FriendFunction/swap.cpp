#include <iostream>
using namespace std;
class two;
class one
{
private:
    int a;

public:
    void input()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
    }
    friend void swap(one &o1, two &t1);
};
class two
{
private:
    int b;

public:
    void input()
    {
        cout << "Enter the value of a " << endl;
        cin >> b;
    }
    void display()
    {
        cout << "The value of a is " << b << endl;
    }
    friend void swap(one &o1, two &t1);
};
void swap(one &o1, two &t1)
{
    int temp;
    temp = o1.a;
    o1.a = t1.b;
    t1.b = temp;
}
int main()
{
    one o1;
    two t1;
    o1.input();
    t1.input();
    cout << "Before swapint the value of a and b are:";
    o1.display();
    t1.display();
    cout << "After swaping " << endl;
    swap(o1, t1);
    o1.display();
    t1.display();
    return 0;
}