#include<iostream>
using namespace std;
template <class temp>
class add{
	temp x ,y;
	public:
		void getdata(){
			cout<<"Enter the value of x and y"<<endl;
			cin>>x>>y;
		}
		void displaysum(){
			cout<<"The sum of the number is"<<x+y<<endl;
		}
};
int main(){
	add <int> s1;
	add <float>s2;
	add<long> s3;
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s1.displaysum();
	s2.displaysum();
	s3.displaysum();
	return 0;
}
