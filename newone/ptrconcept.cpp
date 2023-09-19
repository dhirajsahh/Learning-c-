#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int roll;

public:
    void getdata()
    {
        cout << "Enter the name" << endl;
        cin >> name;
        cout << "enter the roll no" << endl;
        cin >> roll;
    }
    void showdata()
    {
        cout << "The name is" << name << endl;
        cout << "The roll no is" << roll;
    }
};
int main()
{
    student s;
    student *ptr;
    ptr = &s;
    ptr->getdata();
    ptr->showdata();
    return 0;
}