#include<iostream>
using namespace std;
template <class temp>
temp sum (temp t1,temp t2){
	return (t1+t2);
}
int main(){
	int a=3;int b=2;
	cout<<"The sum of two integer is "<<sum(a,b)<<endl;
	float c=3.43, d=4.32;
	cout<<"The sum of two float is "<<sum(c,d)<<endl;
	double e=4123.43,f=3212.32;
	cout<<"The sum of two double is "<<sum(e,f)<<endl;
	return 0;
	
}
