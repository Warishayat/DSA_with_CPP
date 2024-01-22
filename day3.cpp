#include<iostream>
using namespace std;
int main()
{
	//variabes
	int a=10;
	int b=20;		//integer take 4 byte
	
	cout<<"The value against A and B is:"<<a<<" "<<b<<endl;
	cout<<"Size of variable A is:"<<sizeof(a)<<endl;
	cout<<"Size of variable B is:"<<sizeof(b)<<endl;
	
	char name='a';
	cout<<"The value of the name is: "<<name<<" and Size of char "<<sizeof(name)<<endl;
	
	bool value=true;
	cout<<"The value of the bolean is: "<<value<<" size of "<<sizeof(value)<<endl;
	
	double val=134465758;			//precedence upto 15 value
	cout<<"The value of doube val is: "<<val<<" size of val is:"<<sizeof(val)<<endl;
	
	float num=32.1;
	cout<<"The value of float value is:"<<num<<" size of num is:"<<sizeof(num)<<endl;
	
	int apple; 				//take input from the user
	cout<<"Enter the number for the apple:"<<endl;
	cin>>apple;
	cout<<"The total number for the apple is: "<<apple<<endl;
	
	
	//take two number from the user nad print their sum:
	int num_1=20;
	int num_2=30;
	cout<<"Enter the Number1 and Number2: "<<endl;
	cout<<"The sum of two number is : "<< num_1+num_2 <<endl;
	
	//increment decrement pre increment and vice versa
	int value1=30;
	cout<<"post increment:"<<value1++<<endl; 	//it will print 30 then increase value
	cout<<"The value after inrement is:"<<value1<<endl;
	
	//now the pre increment same like pre decrement
	int value2=23;
	cout<<"The orignal value is:"<<value2<<endl;
	cout<<"The value after pre increment is:"<<++value2<<endl;
	
	//swap two number y using third variable
	int number1=12;
	int number2=13;
	cout<<"The orignal value of number1 is:"<<number1<<endl;
	cout<<"The orignal value of number2 is:"<<number2<<endl;
	int temp=number1;
	number1=number2;
	number2=temp;
	cout<<"The value after swapping"<<endl;
	cout<<"Now the value of the Number1 is: "<<number1<<endl;
	cout<<"Now the value of the Number2 is: "<<number2<<endl;
	
	
	//now the relational operator
	int number_1=12;
	int number_2=15;
	cout<<"The Comparison opr is:"<<(number_1==number_2)<<endl;   //it will give the zero becuase num1 and num2 not same
	cout<<"The not equal opr is:"<<(number_1 != number_2)<<endl; //it will true
	cout<<"The number_1 > number_2 is:"<<(number_1 > number_2)<<endl; 	//it will return 0
	cout<<"The number_1 < number_2 is:"<<(number_1 < number_2)<<endl;
	
	
	//logical operator
	// && || ~   //1 for false and 0 for true
	int exp1=5;
	int exp2=6;
	cout<<"The && operator is: "<<(exp1 && exp2)<<endl; //it will gave falase
	cout<<"The || operator is: "<<(exp1 || exp2)<<endl;
	
	//bitwise operator
	
	int expersiion=11;
	cout<<"The left shift operator is: "<<(expersiion<<2)<<endl; //(left-shift) it will gave us 44 answer
	cout<<"The Right shift operator is: "<<(expersiion>>2)<<endl; //right shift operator  gave 2 result
	
	//switch case
	int expression_number;
	cout<<"Enter the number of the week 1 to 7"<<endl;
	cin>>expression_number;
	
	switch (expression_number){
		case 1:
			cout<<"its Monday..";
			break;
		case 2:
			cout<<"its Tuesday..";
			break;
		case 3:
			cout<<"its wednensday..";
			break;
		case 4:
			cout<<"its Thursday..";
			break;
		case 5:
			cout<<"its friday..";
			break;
		case 6:
			cout<<"its Saturday..";
			break;
		case 7:
			cout<<"its Sunday..";
			break;
		default:
			cout<<"Number is invalid"<<endl;
	}
	
}

		
	