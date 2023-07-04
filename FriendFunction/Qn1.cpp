#include <iostream>
using namespace std;
class square
{
    int a;

public:
    void input(int x)
    {
        a = x;
    }
    friend void sum(square);
};
void sum(square num)
{
    cout << "square num is" << num.a * num.a;
}
int main()
{
    square a1, a2;
    a1.input(5);
    sum(a1);
}