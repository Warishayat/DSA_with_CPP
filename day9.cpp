#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//array use dto store same type of data. which is contigious
	int arr[5];
	int size= sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	//to print the output
	for (int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"//find the sum of the given array:"<<endl;
	int arr[6];
	int sum=0;
	cout<<"Enter manually number:"<<endl;
	int size=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<size;i++)
	{
		//takeinput 
		cin>>arr[i];
	}
	cout<<endl;
	//for output
	for (int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"The sum of the array is:"<<sum<<endl;
	
	cout<<"//Question: calculate the maximum element from the array:"<<endl;
	cout<<"Enter number manually by keypad:"<<endl;
	int max[5];
	int m=arr[0];
	for (int i=0;i<5;i++)
	{
		cin>>max[i];			//take the input
	}
	
	for (int i=0;i<5;i++)
	{
		if (max[i]>m)
		{
			m=max[i];
		}
	}
	cout<<"The maximum element in the array is:"<<m<<endl; 
	
	
cout<<"Questoion: Search a given element in the array if it present return idx else -1:"<<endl;
	//take input
	int arrr[5];
	int ans=-1;
	cout<<"Enter the number manually by keypard:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arrr[i];
	}	
	
	//
	int key;
	cout<<"take input number that you want to search:"<<endl;
	cin>>key;
	
	
	//for itertae the loop to find key 
	for (int i=0;i<5;i++)
	{
		if (arrr[i]==key)
		{
			ans=i;
		}
	}
	cout<<"Element at:"<<ans<<endl;
}