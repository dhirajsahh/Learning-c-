#include <iostream>
using namespace std;
class polygon
{
public:
    virtual void Draw() = 0;
};
class Rectangle : public polygon
{
public:
    void Draw()
    {
        cout << "Drawing a rectangle..." << endl;
    }
};
class Triangle : public polygon
{
public:
    void Draw()
    {
        cout << "Drawing a triangle..." << endl;
    }
};
class Pentagon : public polygon
{
public:
    void Draw()
    {
        cout << "Drawing a pentagon..." << endl;
    }
};
int main()
{
    polygon *p[3];
    Rectangle rect;
    Triangle tri;
    Pentagon pent;
    p[0] = &rect;
    p[1] = &tri;
    p[2] = &pent;
    for (int i = 0; i < 3; i++)
    {
        p[i]->Draw();
    }
    return 0;
}
