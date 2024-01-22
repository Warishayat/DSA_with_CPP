#include<iostream>
using namespace std;
int main()

{
	//c++ operator like arthamtic bitwise realtional and many more
	
	//arthamatic operator + -/ %
//	int num=6;
//	int num2=3;
//	cout<<"The addition of two num is "<<num+num2<<" "<<endl;  //9
//	cout<<"The subtraction of two num is "<<num-num2<<" "<<endl; //3
//	cout<<"The division of two num is "<<num/num2<<" "<<endl;	//2
//	cout<<"The Modulus of two num is "<<num%num2<<" "<<endl;	//0
//	cout<<"The Multiplication of two num is "<<num*num2<<" "<<endl; //18
////	
////	//now increment operator
//	num++;
//	num2--;
//	cout<<"The value after increment of num1 :"<<num<<endl;
//	cout<<"The value after decrement of num2 :"<<num2<<endl;
////	
//	//relational operator that define the relation between two operator
//	cout<< (num == num2)<<endl;	//false
//	cout<<(num != num2)<<endl;	//true
//	cout<< (num > num2)<<endl;	//True
//	
//	//logical operator compare the operator
//	bool exp1=true;
//	bool exp2=false;
//	
//	cout<<(exp1&&exp2)<<endl;		//false
//	cout<<(exp1||exp2 )<<endl;		//True
//	cout<<!(exp1)<<endl;			//false
//	
	//Assignment operator
//	int num =3; //3+2=5
//	int num2 =2; //3-1=2
//	num+=2;
//	num2 -=1;
//	cout<<num  b <<endl;
//	cout<<num2;
	//Bitwise operator
	int num1=5;
	int num2=10;
	cout<<(num1<<1)<<endl; //10
	cout<<(num1>>1)<<endl; //2
	cout<<(num1&num2)<<endl;
	cout<<(num1 | num2)<<endl;
	
	
	//misc opeartor
	int a =20;
	cout<<sizeof(a)<<endl; //it gaev 4 value because take 4 byte
	char name='a';	//1
	float num=13.3; //4
	double nume=12; //8
	cout<<sizeof(nume)<<endl;
	cout<<sizeof(num)<<endl;
	cout<<sizeof(name)<<endl;
	//ternary operator
	bool flag;
	a==name? flag==true : flag==false;
	cout<<"The ternery operator of a:"<<flag<<endl;
	//ADress opearrot
	cout<<&a<<endl; //it will tell us about the adress in the memory
	
	//post increment and pre increment a++ first value then icrease but in pre is reciprocal
	//post increment
	int z=5;
	cout<<"The value of post inc is:"<<(z++)<<endl; //it gaev us 4 becuase after print a value would increase
	cout<<z<<endl;		//now the value of z is 6
	//pre increment
	int x=5;
	cout<<"The value of pre increment:"<<(++x)<<endl; //it gave me 6 because it will increase value first
	
	int k=5;
	cout<<"The value of post decrement is:"<<(k--)<<endl;
	cout<<"The pre decrement is:"<<(--k)<<endl; 
	
	
	//bitwise operator
	int num11=22;
	int num22=13;
	cout<<"The & opeartor in bitwise is:"<<(num11 & num22)<<endl; //4
	cout<<"The | opeartor in bitwise is:"<<(num11 | num22)<<endl;	//31
	
	cout<<(num11<<3)<<endl;  //176
	cout<<(num2>>3)<<endl; 	//1 it would gave the 1 answer.
	int btana=1;
	bool batao=1;
	btana==batao? btana=true : btana=false;
	cout<<batao<<endl;
	
	
	
	
}