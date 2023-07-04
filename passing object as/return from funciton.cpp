#include<iostream>
using namespace std;
class time{
	private:
		int hr,min,sec;
    public:
     void getdata(){
     	cout<<"Enter the hr min sec"<<endl;
     	cin>>hr>>min>>sec;
	 }
	 time addtime(time t1,time t2){
	 	time temp;
	 	temp.sec=t1.sec+t2.sec;
	 	temp.min=t1.min+t2.min+temp.sec/60;
	 	temp.sec=temp.sec%60;
	 	temp.hr=t1.hr+t2.hr+temp.min/60;
	 	temp.min=temp.min%60;
	    return(temp);
	 }
	 void displaydata(){
	 	cout<<"hr:"<<hr<<endl<<"min :"<<min<<"sec :"<<sec;
	 }
	 
	 
};
int main(){
	time t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t3=t3.addtime(t1,t2);
	t3.displaydata();
	return 0;
}


