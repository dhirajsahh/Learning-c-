#include<iostream>
#include<conio.h>
using namespace std;
class time{
	int hr,min,sec;
	public:
		void getdata(){
			cout<<"Enter the time hr min sec"<<endl;
			cin>>hr>>min>>sec;
		}
		void calculate_time(time t1,time t2){
			sec=t1.sec+t2.sec;
			min=t1.min+t2.min+sec/60;
			hr=t1.hr+t2.hr+min/60;
			sec=sec%60;
			min=min%60;
		}
		void display(){
			cout<<"The time is "<<endl;
			cout<<"hr:"<<hr<<endl<<"min: "<<min<<endl<<"sec: "<<sec<<endl;
		}
};
int main(){
	time t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t3.calculate_time(t1,t2);
	t3.display();
	getch();
	return 0;
}


