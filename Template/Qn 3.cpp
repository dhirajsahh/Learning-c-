//swap two number using function template
#include<iostream>
using namespace std;
template <class temp>
void swap1 (temp &a ,temp &b){
	temp c;
	c=a;
	a=b;
	b=c;
	
}
int main(){
	int a=3,b=4;
	cout<<"Before swapping the value of a and b is "<<endl;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	swap1(a,b);
	cout<<"After swaping the value of a and b is"<<endl;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	float c=6.234, d=432.43;
	cout<<"Before swapping the value of c and d is "<<endl;
	cout<<"c="<<c<<endl<<"d="<<d<<endl;
	swap1(c,d);
	cout<<"After swaping the value of c and d is"<<endl;
	cout<<"c="<<c<<endl<<"d="<<d<<endl;
	long e=61231234, f=432213443;
	cout<<"Before swapping the value of e and f is "<<endl;
	cout<<"e="<<e<<endl<<"f="<<f<<endl;
	swap1(e,f);
	cout<<"After swaping the value of e and f is"<<endl;
	cout<<"e="<<e<<endl<<"f="<<f<<endl;
	return (0);
	
}
