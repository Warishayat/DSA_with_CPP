#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=10;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if (i==5 || j==5)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	cout<<endl;
cout<<"take input from the user and print the rectangle:"<<endl;
	cout<<endl;
	int x;
	int y;
	cout<<"Enter Number for the row:"<<endl;
	cin>>x;
	cout<<"Enter the Number for the coloum:"<<endl;
	cin>>y;
	
	for(int i=1;i<=x;i++) 	//this's for the rows.
	{
		for(int j=1;j<=y;j++)  //this is for the coloum.
		{
			cout<<"*";
		}
		cout<<endl;
	}
}