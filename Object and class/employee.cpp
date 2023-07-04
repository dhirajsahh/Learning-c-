#include <iostream>
#include <conio.h>
using namespace std;
class employee
{
    char name[20], post[20];
    int salary, id;

public:
    void getdata()
    {
        cout << "Enter the name post salary id" << endl;
        cin >> name >> post >> salary >> id;
    }
    void displaydata()
    {
        cout << "The details are " << endl;
        cout << "Name :" << name << endl
             << "Post :" << post << endl
             << "salary: " << salary << endl
             << "id :" << id << endl;
    }
};
int main()
{
    employee e1, e2;
    e1.getdata();
    e2.getdata();
    e1.displaydata();
    e2.displaydata();
    getch();
    return 0;
}