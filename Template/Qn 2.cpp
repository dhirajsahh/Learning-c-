#include<iostream>
using namespace std;
template  <class max>
max maximum (max a, max b){
	if (a>b){
		return (a);
	}
	else return (b);
}
int main(){
	int a=5;
	int b=6;
	cout<<"The maximum of a and b is"<<maximum(a,b);
	float c=4.543, d=4.643;
	cout<<"The maximum of c and d is"<<maximum(c,d);
	return 0;
}
