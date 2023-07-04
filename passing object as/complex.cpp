#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	float real,img;
	public:
	 void getdata(){
	 	cout<<"Enter the real and imaginary part"<<endl;
	 	cin>>real>>img;
	 	
	 }
	 void addcomplex(complex c1,complex c2){
	 	real=c1.real+c2.real;
	 	img=c1.img+c2.img;
	 }
	 void displayresult(){
	 	cout<<"The sum of the number is"<<endl;
	 	cout<<real<<"+j"<<img;
	 }
};
int main(){
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3.addcomplex(c1,c2);
	c3.displayresult();
	getch();
	return (0);
}
