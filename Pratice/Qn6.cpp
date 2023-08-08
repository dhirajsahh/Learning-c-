// m. Write aprogram to write the infcnnation ot'students in a file, And also display their details in conslole.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int id;
    char Name[20], faculty[20];
    cout << "Enter the details of student" << endl;
    cout << "Enter the name faculty and id" << endl;
    cin >> Name >> faculty >> endl >> id;
    ofstream outf("Student.txt");
    outf << Name << endl;
    outf << faculty << endl;
    outf << id << endl;
    outf.close();
    ifstream inf("student.txt");
    inf >> Name >> faculty >> id;
    cout << "Name=" << Name;
    cout << "faculty=" << faculty;
    cout << "id=" << id;
    inf.close();
    return 0;
}