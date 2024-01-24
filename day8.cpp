#include<iostream>
#include<cmath>
using namespace std;
float avg(float a,float b )
{
	int result= (a+b)/2;
	return result;
}
int add(int a,int b)
{
	int result=a+b;
	return result;
	
} //function prototype

string welcom(string  name)
{
	return "welcome " + name;
}
int main()
{
	float a;
	float b;
	cin>>a>>b;
	float result=avg(a,b);
	int getvalue=add(a,b);
	string name="waris";
	string value=welcom(name);
	cout<<"The value of Average is:"<<result<<endl;
	cout<<"The value of Add function is:"<<getvalue<<endl;
	cout<<"The value of welcome function is:"<<value<<endl;
	cout<<pow(2,3)<<" the two power  three is"<<endl;
	
	
}
