#include<iostream>		//directive process by pre-processor iostream is a headerfile
using namespace std;	// standard namespace which we use in the code.(All the key words tell like cout are standard)
int main()				//int main is the function  main is function and int is return type.
{
	//in function we perfoam he specific task.
//	
//	cout<<"Namasty dunia:)"<<endl;	// ; tell the line/sentence is ended
//	
//	return 0;							//return tell the function is end now

	//variables
	//	int a; 			//variable contain the value 1 and type is integer which store only integer value
	//	 
	//	cout<<name<<endl;
	//	string $name="waris-hayat";
	//	cout<<$name<<endl;
	//datatypes
	//1:primary		2:derived 		3:UserDefined
	//primary are like int float char double etc..
	//derived attribute are func array and pointer that derived from primary datatypes etc
	//userdefined are class structure union enum these datatype defined by the user...
	
	//	int a=3;			//int take 4 byte's. 1 byte == 8 bit 
	//	char name='a';				//char only take 1 byte from the memory
	//	float number=14.3;
	//	double num=14.5;				// it allow 15 decimal it take 8 byte
	//	string name="waris-hayat";
	//	cout<<name;
	int apple;
	cout<<"Enter the no of the Apple:";
	cin>>apple;
	
	cout<<"The value of Apple is:"<<apple<<endl;
	
	int a;
	int b;
	cout<<"Enter the number for a and b"<<endl;
	cin>>a;
	cout<<"The value of A  is "<<a<<endl;
	cin>>b;
	cout<<"The value of B  is "<<b<<endl;
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	cout<<"The value of A is:"<<a<<endl;
	cout<<"The value of B is:"<<b<<endl;
	
	
	


}