#include<iostream>
using namespace std;
int main()
{
	while(true)
{
	int number;
	cout<<"Enter the number:"<<endl;
	cin>>number;
	if(number ==-1)
	{
		break;
	}
}
cout<<endl;

cout<<"QUESTION:Question2: print the multiple of first 5 which is also multiple of 7"<<endl;
	int i=5;
	while(true)
	{
		if(i%7==0)
		{
			cout<<"The value that meet the requirements: "<<i<<endl;
			break;
			
		}
		i+=5; //increament of 5
	}
cout<<endl;

cout<<"Question2:  now make the continue statment which ignore 3 in the whole loop"<<endl;
	for (int i=1;i<=5;i++)
	{
		if(i==3)
		{
			continue; //3 2ill skip from the answer
		}
		cout<<i<<" ";
	}
cout<<endl;

cout<<"Question3: print the number betwwen 1 to 50 except the number which is number%3==0"<<endl;
for(int i=1;i<=50;i++)
{
	if (i%3==0)
	{
		continue;
	}
	else
	{
		cout<<i<<" ";
	}
}
cout<<endl;

cout<<"****\n****\n****\n****\nprint this type of pattren??"<<endl;
cout<<endl;
for (int i=1;i<=4;i++)
{
	for(int j=1;j<=4;j++)
	{
		cout<<"*";
	}
	cout<<endl;
}
//	cout<<endl;
//	cout<<"Print the hollogram pattren"<<endl;
//	int n,m;
//	cin>>n>>m;
//	for (int i=1;i<=n;i++)
//	{
//		for (int j=1;j<=m;j++)
//		{
//			if (i==1|| j==1 || i==n || j==m)
//			{
//				cout<<"*";
//			}
//			else{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}
//	cout<<endl;
	
	
	cout<<"//Question: draw and solve the question of star triangle;"<<endl;
	for (int i=1;i<=4;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"QUestion: make the same pattren but in reverse which is given above"<<endl;
	
	for(int i=1;i<=4;i++)
	{
		for (int j=1;j<=(4-i+1);j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
cout<<"Make the paramid of the dtart  pattren"<<endl;
int n,m;
cin>>n>>m;
for (int i=1;i<=n;i++)
{
	for (int j=1;j<=n-i;j++)
	{
		cout<<" ";
	}
	for(int k=1;k<=i*2-1;k++)
	{
		cout<<"*";
	}
	cout<<endl;
}

cout<<"Question:print the number hollow  pattren"<<endl;
	cout<<endl;
	cout<<"Print the hollogram pattren"<<endl;
	int nn,mm;
	cin>>nn>>mm;
	for (int i=1;i<=nn;i++)
	{
		for (int j=1;j<=mm;j++)
		{
			if (i==1|| j==1 || i==nn || j==mm)
			{
				cout<<j;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	cout<<endl;


cout<<"Question:print the full rectangle with only number 1 and 2"<<endl;
cout<<endl;
for(i=1;i<=5;i++)
{
	for (int j=1;j<=5;j++)
	{
		if( (i+j) % 2==0)
		{
			cout<<"1";
		}
		else
		{
			cout<<"2";
		}
	
	}
		cout<<endl;
}
cout<<endl;
cout<<"Question: Print the triangle of numbers"<<endl;
cout<<endl;
	for(int i=1;i<=5;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
cout<<endl;
cout<<"Take a number from the uder and count digit of that number"<<endl;
cout<<endl;
	int number;
	int num=0;
	cout<<"Enter the numbers to count"<<endl;
	cin>>number;
	int count=0;
	while(number!=0)
	{
		num=number/10;
		number=num;
		count=count+1;	
		
	}
	cout<<"The total number in the digit is:"<<count<<endl;
	
cout<<"Question take a number from the user and  make the string reverse:"<<endl;

int remainder;
int numbr;
int reversed=0;
int number_;
cout<<"Enter the number"<<endl;
cin>>number_;

while(number_!=0)
{
	remainder=number_%10;
	reversed=reversed*10+remainder;
	numbr=number_/10;
	number_=numbr;
	
}
cout<<"The revered number is:"<<reversed<<endl;

cout<<endl;
cout<<endl;
cout<<"Print the factorial of N number:"<<endl;
	int fact_number;
	cout<<"Enter the Fact_number:"<<endl;
	cin>>fact_number;
	int fac=1;
	while(fact_number>1)
	{
		fac=fac*fact_number;
		fact_number--;
	}
	cout<<"The factorial agianst:"<<fact_number<<"is ="<<fac<<endl;
	
	
	cout<<endl;
	cout<<"Print the daimond in of character"<<endl;
	cout<<endl;
		char ch='A';
	int n=45;
	int m=45;
	for(int r=0;r<n;r++) //from hald of daimond shape row 1 to mid which is is n;
	{
		for (int j=0;j<n-r;j++) //spaces 1 to nth row
		{
			cout<<" ";
		}
		for (int c=0;c<(2*r)-1;c++) //character in the row
		{
			cout<<char('A' + c);
		}
		cout<<endl;
	}
	for (int i=0;i<m;i++) //from middle to down from 1 to m
		{
			for(int s=0;s<i;s++) //printing spaces
			{
				cout<<" ";
				
			}
			for (int c=0;c<2*(m-i)-1;c++) //printing char
				{
					cout<<char('A'+c);
				}
				cout<<endl;
		}
	
	cout<<endl;
	cout<<endl;
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



