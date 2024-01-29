#include<iostream>
using namespace std;
int globalvariable=20;			//global variable
void add()
{
	//local variable
	int Locavariable=30;
	cout<<"The value of the local variable is: "<<Locavariable<<endl;
	cout<<"Hellow world"<<endl;
	cout<<"The value of global variable is: "<<globalvariable<<endl;
	for (int i=1;i<=10;i++)
	{
		
	}
//	cout<<i<<endl;	//Loop variable cant be acces outside the loop...
}
void average(int x,int y)			//the paramter inside void average function are formal..
{
	int result=(x+y)/2;
	cout<<"The value of the average is:"<<result<<endl;
}
int main()
{
	//but when i will acess the local variable outside function it will genrate error for me..
	add();
	//	cout<<localvariable<<endl; 
	//formal paramter and acutsl paramter
	int x=20;
	int y=40;
	average(x,y);			//actual paramter ehich is pass through average
	
}