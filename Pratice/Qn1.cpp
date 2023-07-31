#include <iostream>
using namespace std;
class one
{
private:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter the value of a and b " << endl;
        cin >> a >> b;
    }
    void display()
    {
        cout << "a= " << a << endl
             << "b=" << b << endl;
    }
    friend one swapdata(one &a);
};
one swapdata(one &a)
{
    one temp;
    temp.a = a.a;
    a.a = a.b;
    a.b = temp.a;
}
int main()
{
    one o1;
    o1.getdata();
    cout << "before swaping " << endl;
    o1.display();
    cout << "after swaping is" << endl;
    swapdata(o1);
    o1.display();
    return 0;
}