#include <iostream>
#include <fstream>
using namespace std;
class employee
{
private:
    int id;
    char name[20], adress[20], company[20];

public:
    void getinput()
    {
        cout << "Enter the name adress company and id of employee" << endl;
        cin >> name >> adress >> company >> id;
    }
    void display()
    {
        cout << "Name=" << name << endl;
        cout << "adress=" << adress << endl;
        cout << "compay name=" << company << endl;
        cout << "id=" << id << endl;
    }
};
int main()
{
    employee e;
    e.getinput();
    ofstream outf("employee.dat");
    outf.write((char *)(&e), sizeof(e));
    outf.close();
    ifstream inf("employee.dat");
    inf.read((char *)(&e), sizeof(e));
    e.display();
    inf.close();
    return 0;
}