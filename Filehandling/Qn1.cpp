#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int id;
    char address[20], name[30];
    ofstream out("student.txt");
    cout << "enter the name adress and id of student " << endl;
    cin >> name >> address >> id;
    out << "The details of student are" << endl;
    out << "name :" << name << " id : " << id << " adress :" << address;
    out.close();
    return 0;
}