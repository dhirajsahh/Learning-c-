#include <iostream>
using namespace std;
// int add(int, int);
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int sum = add(5, 6);
    cout << sum;
}
