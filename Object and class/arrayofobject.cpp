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
        cout << "Name :" << name << endl
             << "Post :" << post << endl
             << "salary: " << salary << endl
             << "id :" << id << endl;
    }
};
int main()
{
    employee e[5];
    for (int i = 0; i < 5; i++)
    {
        e[i].getdata();
    }
    cout << "The details are " << endl;
    for (int i = 0; i < 5; i++)
    {
        e[i].displaydata();
    }
    getch();
    return 0;
}