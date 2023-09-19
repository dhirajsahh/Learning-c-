// wap to write an object of a class to a file and read information from
// the file using another file object of the same class to display the record in screen.
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
class student
{
private:
    char name[20];
    char faculty[10];
    int rollno;

public:
    void getdata()
    {
        cout << "Enter the name" << endl;
        cin >> name;
        cout << "Enter the faculty" << endl;
        cin >> faculty;
        cout << "Enter the rollno" << endl;
        cin >> rollno;
    }
    void displaydata()
    {
        cout << "The name is" << endl;
        cout << name;
        cout << "The faculty is" << endl;
        cout << faculty;
        cout << "The rollno is" << endl;
        cout << rollno;
    }
};
int main()
{
    student st, rd;
    st.getdata();
    ofstream stdetails("studnet.txt");
    stdetails.write((char *)(&st), sizeof(st));
    stdetails.close();
    ifstream readdetails("studnet.txt");
    readdetails.read((char *)(&rd), sizeof(rd));
    rd.displaydata();
    readdetails.close();
    return 0;
}