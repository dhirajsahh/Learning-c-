#include <iostream>
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
        cout << "Enter the name of the student " << endl;
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
        cout << "Rollno is" << endl;
        cout << rollno;
    }
};
int main()
{
    student st;
    // st.getdata();
    ifstream stdata("studentdata.txt");
    // ofstream stdata("studentdata.txt");
    // stdata.write((char *)(&st), sizeof(st));
    stdata.read((char *)(&st), sizeof(st));
    st.displaydata();
    return 0;
}