#include<iostream>
#include<vector>
using namespace std;
void sortEvenAndOdd(vector <int> &v)
{
	int left_ptr=0;
	int right_ptr=v.size()-1;
	
	while(left_ptr<right_ptr)
	{
		if(v[left_ptr] % 2 ==1 && v[right_ptr] % 2 ==0)
		{
			int temp=v[left_ptr];
			v[left_ptr]=v[right_ptr];
			v[right_ptr]=temp;
			left_ptr++;
			right_ptr--;
		}
		if(v[left_ptr]%2==0)
		{
			left_ptr++;
		}
		if(v[right_ptr]%2==1)
		{
			right_ptr--;
		}
	}
}

int main()
{
	cout<<"Move all the ven integer at very ist pos and move all thge odd integers at he last of the array/vector:"<<endl;
	cout<<"Enter the size of the vector:"<<endl;
	int size;
	cin>>size;
	vector<int> v(size);
	cout<<"Enter the values:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>v[i];
	}
	sortEvenAndOdd(v);
	
	cout<<"Output here:"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
}