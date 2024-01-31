#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void SquareNumberEach(vector<int> &v) 
{
	int left_ptr=0;
	int right_ptr=v.size()-1;
	vector<int> ans;
	
	while(left_ptr<=right_ptr)
	{
		if(abs(v[left_ptr])>abs(v[right_ptr]))
		{
			ans.push_back(v[left_ptr] * v[left_ptr]);
			left_ptr++;
		}
		else
		{
			ans.push_back(v[right_ptr]*v[right_ptr]);
			right_ptr--;
		}
	}
	reverse(ans.begin(),ans.end());
	cout<<"Output here:"<<endl;
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}
int main()
{
	cout<<"Given all the integer array 'a' sorted in non decreasing order return an rray of the square f eachnumber in non decreasing order"<<endl;
	cout<<endl;
	int size;
	cout<<"Enter the size of the vector: "<<endl;
	cin>>size;
	vector<int> v(size);
	cout<<"Enter the values for the vector:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>v[i];
	}
	
	SquareNumberEach(v);
	

	
}