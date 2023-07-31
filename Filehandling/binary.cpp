#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char name[20], faculty[20];
    int id;
    // cout << "Enter the name faculty and id of a student " << endl;
    // cin >> name >> faculty >> id;
    // ofstream outf("student.dat");
    // outf.write((char *)(&name), sizeof(name));
    // outf.write((char *)(&faculty), sizeof(faculty));
    // outf.write((char *)(&id), sizeof(id));
    // outf.close();
    ifstream data("student.dat");
    data.read((char *)(&name), sizeof(name));
    data.read((char *)(&faculty), sizeof(faculty));
    data.read((char *)(&id), sizeof(id));
    cout << name << faculty << id;
    data.close();
}