//functions in depth
//why func are important 
//how to declare functions
//how to call a function
//scope of a variables
//function calll by value
//function call y refrence
//default parameter value 
#include<iostream>
#include<cmath>
using namespace std;
int GlobalVariable=20; 	//these are accesable in all place f program
int squareNumber(int n)		//find the sqaue of n natural number
{
	return n*n;
}
double area(int radius)		//Area 
{
	return 3.14 * (radius*radius);
}
double circumstance(int radius)	
{	//Area of ircumstance
	return 2*3.14*(radius);
}
void EligibilityVote(int age)			//chek eligibility of the vote
{
	if (age>18)
	{
		cout<<"Yes you can vote"<<endl;
	}
	else
	{
		cout<<"Sorry you cant.."<<endl;
	}
}
int CheckOdd(int num)		//odd nummber between two pints
{
	if (num%2 !=0)
	{
		return num;
	}
	
}
bool checkPrime(int num)		//check the prime nmber between two point
{
	for (int i=2;i<=sqrt(num);i++)
	{
		if (num%i==0)
		{
			return false;
		}
	}
	return true;
	
}
int main()			//Main function
{
	for (int i =1;i<= 5;i++)
	{
		cout<<squareNumber(i)<<" ";
	}
	cout<<endl;
	int val=3;			//loal variable which canot acess outide fromthe function
	double result=area(val);
	float result_=circumstance(val);
	cout<<"The area of result is:"<<result<<endl;
	cout<<"The circumstance of result is:"<<result_<<endl;
	int age=19;
	EligibilityVote(age);
	int num1=1;
	int num2=10;
	for (int i=num1;i<=num2;i++)
	{
		cout<<CheckOdd(i)<<endl;
	}
	cout<<endl;
	cout<<endl;
	int prime1=2;
	int prime2=40;
	for (int i=prime1;i<=prime2;i++)
	{
		if (checkPrime(i))
		{
			cout<<i<<" ";
		}
	}
}