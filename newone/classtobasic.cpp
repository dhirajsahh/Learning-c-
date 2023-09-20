#include <iostream>
using namespace std;
class time
{
private:
    int hr;

public:
    void input()
    {
        cout << "Enter the value of hr" << endl;
        cin >> hr;
    }
    operator int()
    {
        int min = hr * 60;
        return min;
    }
};
int main()
{
    time t1;
    int m;
    t1.input();
    m = t1;
    cout << m;
    return 0;
}