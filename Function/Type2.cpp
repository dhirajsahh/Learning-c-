#include <iostream>
using namespace std;
float area(float);
int area(int);
int main()
{
    float radius;
    int length;
    cout << "Enter the radius" << endl;
    cin >> radius;
    cout << "Enter the length" << endl;
    cin >> length;
    cout << "The area of the circle is"
         << area(radius) << endl;
    cout << "The area of the square is"
         << area(length);
    return 0;
}
float area(float r)
{
    float A = 3.14 * r * r;
    return A;
}
int area(int a)
{
    int A = a * a;
    return A;
}