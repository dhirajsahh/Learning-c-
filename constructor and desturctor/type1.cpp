#include <iostream>
using namespace std;
class student
{
    int rollno;
    float marks;

public:
    student()
    {
        rollno = 4;
        marks = 2.3;
    }
    student(int r, int m)
    {
        rollno = r;
        marks = m;
    }
    void showdetails()
    {
        cout << "rollno" << rollno << "marks" << marks;
    }
};
int main()
{
    student s1;
    student s2(22, 2.34);
    s1.showdetails();
    s2.showdetails();
    return 0;
}
