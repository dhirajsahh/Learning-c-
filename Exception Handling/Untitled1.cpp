#include <iostream>
using namespace std;
class Base
{
public:
    virtual ~Base()
    {
        cout << "Destroying base class object..." << endl;
    }
};
class Derv : public Base
{
public:
    ~Derv()
    {
        cout << "Destroying derived class object..." << endl;
    }
};
int main()
{
    Base *bptr ;
    bptr=new Derv;
    delete bptr;
    return 0;
}
