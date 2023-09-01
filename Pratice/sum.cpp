// WAP to add private data of two different classes using non-member function;
#include <iostream>
using namespace std;
class second;
class first
{
private:
    int a;

public:
    void getinput()
    {
        cout << "Enter the value of firstnumber" << endl;
        cin >> a;
    }
    void display()
    {
        cout << "The value of first number is" << a << endl;
    }
    friend int sum1(first, second);
};
class second
{
private:
    int b;

public:
    void input()
    {
        cout << "Enter the value of secondnumber" << endl;
        cin >> b;
    }
    void display()
    {
        cout << "The value of second number is" << b << endl;
    }
    friend int sum1(first, second);
};
int sum1(first f1, second s1)
{
    int sum = f1.a + s1.b;
    return sum;
}
int main()
{
    first f1;
    second s1;
    f1.getinput();
    s1.input();
    f1.display();
    s1.display();
    int value = sum1(f1, s1);
    cout << "their  sum is" << value << endl;
    return 0;
}