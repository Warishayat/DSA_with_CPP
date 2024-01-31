#include<iostream>
#include<vector>
using namespace std;
void sortzeroandone(vector<int> &v)
{
	int left_ptr=0;
	int right_ptr=v.size()-1;
	
	while(left_ptr<right_ptr)
	{
		if(v[left_ptr]==1 && v[right_ptr]==0)
		{
			v[left_ptr]=0;
			v[right_ptr]=1;
			left_ptr++;
			right_ptr--;
		}
		if(v[left_ptr]==0)
		{
			left_ptr++;
		}
		if(v[right_ptr]==1)
		{
			right_ptr--;
		}
	}
}
int main()
{
	cout<<"Sort an array Considerd 0 and 1:"<<endl;
	cout<<"Enter size:"<<endl;
	int n;
	cin>>n;
	
	vector<int> v(n);
	cout<<"Input values 0 and 1 only:"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cin>>v[i];
	}
	sortzeroandone(v);
	cout<<"Output is:"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}