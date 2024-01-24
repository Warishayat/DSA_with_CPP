#include<iostream>
using namespace std;
int main()
{
	//loops  wgile loop // for loop and do while loop
	int i=0;
while(i<5)
{
	cout<<i<<endl;
	i++;
}
//print the sum of the natural number where n is input
int num;
cout<<"Enter the Natural number:"<<endl;
cin>>num;

int sum=0;
int n=1;
while(n<=num)
{
	sum =sum+n;
	n++;
}
cout<<"The sum of the total number is: "<<sum<<endl;
//now for loop
for(int n=1;n<=5;n++)
{
	cout<<n<<endl;
}
//sum of the number from 1 to n and n number will gave the user
int num2;
cout<<"Enter the number:"<<endl;
cin>>num2;
for (int i=1;i<=num2;i++)
{
	int sum=sum+i;
}
cout<< "The sum of all number till N is :"<<sum<<endl;
//now do while loop : these loop are run 1 time in every conditiion
int do_numer=7;
do{
	cout<<"This will print the rsult one time every condition"<<endl;
	do_numer++;
}while(do_numer<10);

// Practise question on foor loop;

//Question 1: Enter the number and print untill user enter -1


}

