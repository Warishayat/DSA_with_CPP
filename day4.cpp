#include<iostream>f
using namespace std;
int main()
{
	//conditional operators
	int marks;
	cout<<"Enter the marks"<<endl;
	cin>>marks;

	if(marks > 33) // if statment - else 
	{
		cout<<"You are pass :-)"<<endl;
	
	}
	else 
	{
		cout<<"oops you are fail :-)"<<endl;
	}
	if (marks % 2 ==0)
	{
		cout<<"Number is even: "<<marks<<endl;
	}
	else
	{
		cout<<"The Number is odd: "<<marks<<endl;
	}
	
	//cREATE A Condition with  if else if :age is > 18 adult below i8 and 12 teenage and below 12 child 
	
	int age;
	cout<<"Enter the age"<<endl;
	cin>>age;
	
	if (age<12)
	{
		cout<<"you are child"<<age<<endl;
	}
	else if (age> 18)
	{
		cout<<"You are Adult"<<endl;
	}
	else{
		cout<<"You areb Teenage"<<endl;
	}
	
	//nested if else if within if else
	int total_marks;
	cout<<"Enter the total_marks"<<endl;
	cin>>total_marks;
	if (total_marks>33)
	{
		if(total_marks >= 80)					//nested if-else
		{
			cout<<"congrats you pass with A+ grade: "<<endl;
		}
		else
		{
			cout<<"You are just pass: "<<endl;
		}
	}
	else
	{
		cout<<"You are fail: "<<endl;
	}
	//LOgical Opeartor && || ñot
	//(logial && )print the user num and tell  if its even and divisble by 3 
	
	int num;
	cout<<"Enter the Number: "<<endl;
	cin>>num;
	if (num % 2==0 && num%3==0) 		//&& And operator
	{
		cout<<"Its divisible by 3 and its  is a even number"<<num<<endl;
	}
	else
	{
		cout<<"Requirements doesn't meet with the conditions"<<endl;
	}
		//(logial || )print the user num and tell  if its even or divisble by 3 
	int num2;
	cout<<"Enter the Number: "<<endl;
	cin>>num2;
	if (num2 % 2==0 || num2 %3==0)   			//or operator
	{
		cout<<"Its Satisy the conditions"<<num<<endl;
	}
	else
	{
		cout<<"Requirements doesn't meet with the conditions"<<endl;
	}
	//Switch Case it compare the value with case and just show us valid answer quickly....
	
	int day;
	cout<<"Enter the Number for tha day between (1-7)) :"<<endl;
	cin>>day;
	switch(day)
	{
		case 1:
			cout<<"Its Monday: "<<endl;
			break;
		case 2:
			cout<<"Its Tuesday: "<<endl;
			break;
		case 3:
			cout<<"Its Wednesday: "<<endl;
			break;
		case 4:
			cout<<"Its Thrusday: "<<endl;
			break;
		case 5:
			cout<<"Its Friday: "<<endl;
			break;
		case 6:
			cout<<"Its Saturday: "<<endl;
			break;
		case 7:
			cout<<"Its Sunday: "<<endl;
			break;
		default:
			cout<<"You enterd invalid number:-)"<<endl;
	}
	
	//one more question on switch case
	//take character from user and tell weather its vowel or consonent:
	char value;
	cout<<"Enter the character"<<endl;
	cin>>value;
	
	switch(value)
	{
		case 'a':
			cout<<"its vowel: "<<endl;
			break;
		case 'e':
			cout<<"its vowel: "<<endl;
			break;
		case 'i':
			cout<<"its vowel: "<<endl;
			break;
		case 'o':
			cout<<"its vowel: "<<endl;
			break;
		case 'u':
			cout<<"its vowel: "<<endl;
			break;
		case 'A':
			cout<<"its vowel: "<<endl;
			break;
		case 'E':
			cout<<"its vowel: "<<endl;
			break;
		case 'I':
			cout<<"its vowel: "<<endl;
			break;
		case 'O':
			cout<<"its vowel: "<<endl;
			break;
		case 'U':
			cout<<"its vowel: "<<endl;
			break;
		default :
			cout<<"Its consonents: "<<endl;
		}
}