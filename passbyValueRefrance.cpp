#include<iostream>
#include<cmath>
using namespace std;
void  fun(int *x)			//pointer
{
	cout<<"The orignal value of  x is:"<<*x<<endl;
}

void swap(int x,int y)
{
	int temp=0;
	temp=x;
	x=y;
	y=temp;
}
void SwapbyRef(int &x,int &y)		//it take value as a refrence mean orignal value...
{
	int temp=x;
	x=y;
	y=temp;
	
}
int main()
{
	//pass by value mean pass by copy we pass the copy of actual value
	int x=30;
	int y=70;
	
	fun(&x);
	
	swap(x,y);
	cout<<"The value of X is:"<<x<<endl;
	cout<<"The value of Y is:"<<y<<endl;
	
	int ref1=9;
	int ref2=1;
	
	SwapbyRef(ref1,ref2);
	
	cout<<"The value ref1 and ref2 is:"<<ref1<<" "<<ref2<<endl;
	
	// pass by referance in that we pass our orignal paramter. rather then copy
	
	int a=10;
	int &b=a;
	cout<<"The value of A and B is:"<<a<<" "<<b<<endl;
	b=77;
	cout<<"The value of A and B is:"<<a<<" "<<b<<endl;
	
	
	
	
}