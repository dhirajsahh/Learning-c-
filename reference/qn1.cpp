// Wap to calculate tsa csa and volume of a cylinder in a function and display the result in main
#include <iostream>
#include <conio.h>
using namespace std;
void calculate(float l, float r, float &c, float &t, float &v)
{
    cout << c << t << v;
    c = 2 * 3.14 * r * l;
    t = c + 2 * 3.14 * r * r;
    v = 3.14 * r * r * l;
}
int main()
{
    float l, r, c1, t1, v1;
    cout << "Enter the lenth and radius" << endl;
    cin >> l >> r;
    calculate(l, r, c1, t1, v1);
    cout << "The curved surface area is" << endl
         << c1 << endl;
    cout << "The Total surface area is" << endl
         << t1 << endl;
    cout << "The volume surface area is" << endl
         << v1;
}
