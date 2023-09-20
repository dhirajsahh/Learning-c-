#include <iostream>
#include <fstream>
using namespace std;
class employee
{
private:
    int id;
    char name[20];
    char adress[10];

public:
    void getdata()
    {
        cout << "Enter the name of the person" << endl;
        cin >> name;
        cout << "Enter the id" << endl;
        cin >> id;
        cout << "Enter the adress" << endl;
        cin >> adress;
    }
    void display()
    {
        cout << "The name of person is " << name << endl;
        cout << "The id is" << id << endl;
        cout << "The adress is" << adress << endl;
    }
};
int main()
{
    cout << "Enter the employee details" << endl;
    employee e[4];
    // ofstream out("Employee.dat");
    // for (int i = 0; i < 4; i++)
    // {
    //     e[i].getdata();
    //     out.write((char *)(&i), sizeof(i));
    // }
    // out.close();
    cout << "Employee details" << endl;
    ifstream inf("Employee.dat");
    for (int i = 0; i < 4; i++)
    {
        inf.read((char *)(&i), sizeof(i));
        e[i].display();
    }
    inf.close();
    return 0;
}