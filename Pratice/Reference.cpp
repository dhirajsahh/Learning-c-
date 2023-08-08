// What is the main advantage of passing argutnent by reforence? Illustrate with a suitable prograrn.
#include <iostream>
using namespace std;
int cal(int l, int b, int h, int &a1, int &v1)
{
    a1 = l * b;
    v1 = l * b * h;
}
int main()
{
    int l, b, h, a, v;
    cout << "Enter the length" << endl;
    cin >> l;
    cout << "Enter the breadth" << endl;
    cin >> b;
    cout << "Enter the height" << endl;
    cin >> h;
    cal(l, b, h, a, v);
    cout << "The area of box is" << a << endl;
    cout << "The volume of box is" << v << endl;
    return 0;
}