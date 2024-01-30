#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//int secondlargest(vector<int> v)			//part of question
//{ //2 3 5 7 6 1
//	int maxindex=0;
//	for(int i=0;i<v.size();i++)
//	{
//		if (v[i] > v[maxindex] )
//		{
//			maxindex=i;
//		}
//	}
//	return maxindex;
//}
int main()
{
//	cout<<"Find the total number of pair in the given array whose sum is equal to given x"<<endl;
//	
//	vector <int> v(5);
//	for(int  i=0;i<v.size();i++)
//	{
//		cin>>v[i];
//	}
//	int targetsum;
//	cout<<"Enter the traget sum:"<<endl;
//	cin>>targetsum;
//	int count=0;				//to count no of pairs
//	for(int i=0;i<v.size();i++)
//	{
//		for(int j=i+1;j<v.size();j++)
//		{
//			if(v[i]+v[j]==targetsum)
//			{
//				count++;
//			}
//		}
//	}
//	cout<<"The total number of pairs are:"<<count<<endl;

//	cout<<"Find the number of triplets whoe sum is ewual to given value of x"<<endl;
//	vector<int> v(6);
//	for (int i=0;i<v.size();i++)
//	{
//		cin>>v[i];
//	}
//	int targetsum;
//	cout<<"Enter the target sum:"<<endl;
//	cin>>targetsum;
//	
//	//for output
//	int count=0;
//	for (int i=0;i<v.size();i++)
//	{
//		for(int j=i+1; j<v.size(); j++)
//		{
//			for (int k=j+1; k<v.size(); k++)
//			{
//				if(v[i]+v[j]+v[k]==targetsum)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	cout<<"The total numbers of pairs are:"<<count<<endl;
//
//	cout<<"Find the unique number in the array where all the elements  are being repeated twice with one value being unique"<<endl;
//	vector<int> v(7);
//	for(int i=0;i<v.size();i++)
//	{
//		cin>>v[i];
//	}
//	
//	for (int i=0;i<v.size();i++)	//to compare the values
//	{
//		for(int j=i+1;j<v.size();j++)
//		{
//			if(v[i]==v[j])
//			{
//				v[i]=v[j]=-1;			//pass the -1 at index where value compare is same.
//			}
//		}
//	}
//	for(int i=0; i<v.size(); i++)
//	{
//		if(v[i] !=-1)
//		{
//			cout<<"The unique value that is not twice is:"<<v[i]<<" ";
//		}
//	}
	
//	for (int i=0;i<v.size();i++)
//	{cout<<"Find the sexond largest element i the array/vector"<<endl;
//	vector<int> v(6);
//	for(int i=0;i<v.size();i++)
//	{
//		cin>>v[i];
//	}
//	
//	int largestElement=secondlargest(v);
////	v[largestElement]=-1;
//	int Lelement=v[largestElement];
//	for(int i=0;i<v.size();i++)
//	{
//		if(v[i]==Lelement)
//		{
//			v[i]=-1;	
//		}
//	}
//	int secondlargestElment=secondlargest(v);
//	cout<<"The second largest ele is:"<<v[secondlargestElment]<<endl;
//	cout<<"Enter size:"<<endl;
//	int n;
//	cin>>n;
//	
//	cout<<"Rotate a given array n by k step where k is non negative integers  note k can be greater then n as n is zie of arraya:"<<endl;
//	vector<int> v(n);
//	for(int i=0;i<v.size();i++)
//	{
//		cin>>v[i];
//	}
//	int k;
//	cout<<"Enter your k step:"<<endl;
//	cin>>k;
//	
//	k=k%5;   			//becauce k can be greater then n and after 5 step we are getting back again same array.
//	
//	int newarray[5];
//	int j=0;
//	for(int i=n-k;i<v.size();i++)			//
//	{
//		newarray[j++]=v[i];
//	}
//	for (int i=0;i<=k;i++)
//	{
//		newarray[j++]=v[i];
//	}
//	
//	//for output
//	for(int i=0;i<5;i++)
//	{
//		cout<<newarray[i]<<" ";
//	}
//	int n;
//	cin>>n;
//	cout<<"Rotate a given array n by k step where k is non negative integers  note k can be greater then n as n is zie of arraya:"<<endl;
//	vector<int> v(n);
//	for(int i=0;i<n;i++)
//	{
//		cin>>v[i];
//	}
//	int k;
//	cout<<"Enter your k step:"<<endl;
//	cin>>k;
//	k=k%v.size();   			//becauce k can be greater then n and after 5 step we are getting back again same array.
//	
//	reverse (v.begin(), v.end());
//	reverse (v.begin(),v.begin()+k);
//	reverse (v.begin()+k,v.end());
//	
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<" ";
//	}
}