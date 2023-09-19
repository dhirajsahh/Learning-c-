// Write a program having polygon as an abstract class with Length and Height as its data member. Create derived
// class Rectangle and Triangle. Make Area $ as pure virtual function and redefined it in
// derived class to calculate respective area. //
#include <iostream>
using namespace std;
class polygon
{
protected:
    int length, height;

public:
    virtual void Area() = 0;
};
class Rectangle : public polygon
{
public:
    void Area()
    {
        cout << "Enter the length" << endl;
        cin >> length;
        cout << "The area of the rectangle is" << length * length;
    }
};
class Triangle : public polygon
{
public:
    void Area()
    {
        cout << "Enter the height and length" << endl;
        cin >> length >> height;
        cout << "The area of the triangle is" << (0.5 * length * height);
    }
};
int main()
{
    Triangle tri;
    Rectangle rect;
    polygon *p[2];
    p[0] = &tri;
    p[1] = &rect;
    p[0]->Area();
    p[1]->Area();
    return 0;
}