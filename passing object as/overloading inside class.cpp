#include<iostream>
using namespace std;
class add{
	public:
	 void sum(int a1,int b1){
	        int	sum=a1+b1;
	 	  cout<<sum<<endl;
	 }
	 void sum(int a1,int b1,int c1){
	 	int sum=a1+b1+c1;
	 	cout<<sum<<endl;
	 }
};
int main(){
	add a1,b1;
	a1.sum(3,4,5);
	a1.sum(4,2);
}
