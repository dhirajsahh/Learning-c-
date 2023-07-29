//finding square root of number using exception handling
#include<iostream>
#include<math.h>
using namespace std;
int main(){
float num;
cout<<"Enter the value of num"<<endl;
cin>>num;
try{
	if(num>0){
		float result=pow(num,0.5);
		cout<<"The square root of a number is"<<result<<endl;
	}
	else {
		throw (num);
	}
}
catch(float num){
	num=(-1)*num;
	float result=pow(num,0.5);
		cout<<"The square root of a number is"<<result<<"i"<<endl;
	
}
return (0);
}

