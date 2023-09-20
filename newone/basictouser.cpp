#include <iostream>
using namespace std;
class time
{
private:
    float hr;

public:
    time()
    {
        hr = 0;
    }
    time(int m)
    {
        hr = m / 60.0;
    }
    void display()
    {
        cout << "The vlaue of the hr is" << endl;
        cout << hr;
    }
};
int main()
{
    time t1;
    int m;
    cin >> m;
    t1 = m;
    t1.display();
    return 0;
}