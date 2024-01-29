#include<iostream>
#include<vector>
using namespace std;
int main()
{
//				vector<int> v;
//				cout<<"Size: "<<v.size()<<endl;
//				cout<<"Capacity: "<<v.capacity()<<endl;
//				
//				v.push_back(1);
//				cout<<"Size: "<<v.size()<<endl;
//				cout<<"Capacity: "<<v.capacity()<<endl;
//				
//				v.push_back(2);
//				cout<<"Size: "<<v.size()<<endl;
//				cout<<"Capacity: "<<v.capacity()<<endl;
//				
//				v.push_back(3);
//				cout<<"Size: "<<v.size()<<endl;
//				cout<<"Capacity: "<<v.capacity()<<endl;
//				
//				v.resize(5);
//				cout<<"Size: "<<v.size()<<endl;
//				cout<<"Capacity: "<<v.capacity()<<endl;
//				
//				v.push_back(12);
//				cout<<"Size: "<<v.size()<<endl;
//				cout<<"Capacity: "<<v.capacity()<<endl;
				
//			vector <int> v(6);
//			cout<<"Enter the vector element"<<endl;
//			for(int i=0;i<v.size();i++) 
//			{
//				cin>>v[i];
//			}
//			//enter key to find
//			int key;
//			cout<<"Enter key to find:"<<endl;
//			cin>>key;
//			
//			//for output
//			int ans=-1;
//			cout<<"The result is"<<endl;
//			for(int i=0;i<v.size();i++)
//			{
//				if (v[i]==key)
//				{
//					ans=i;	
//				}
//				
//			}
//			cout<<"The last occurance of given element:"<<key<<" is :"<<ans<<endl;
			
				
//				cout<<"Count the number of occurance in the particular element:"<<endl;
//				
//				vector<int> n(6);
//				
//				cout<<"Enter the element for the vector"<<endl;
//				for (int i=0;i<n.size();i++)
//				{
//					cin>>n[i];
//				}
//				
//				//for output
//				int key;
//				cout<<"Enter key to found:"<<endl;
//				cin>>key;
//				
//				
//				//for output
//				int total_count=0;
//				cout<<"Output Here.."<<endl;
//				for(int i=0;i<n.size();i++)
//				{
//					if(n[i]==key)
//					{
//						total_count++;
//					}
//				}
//				cout<<"The total count is:"<<total_count<<endl;
				
//			cout<<"Count the number of element stictly greater then value x"<<endl;
//			
//			vector <int> k(6);
//			
//			//for taking input
//			cout<<"Manually Enter the element:"<<endl;
//			for(int i=0 ;i<k.size();i++)
//			{
//				cin>>k[i];
//			}
//			
//			//enter the ele to find from the vector.
//			int ele;
//			cout<<"Enter the element:"<<endl;
//			cin>>ele;
//			
//			//for output
//			int count=0;
//			for (int i=0; i<k.size();i++)
//			{
//				if (k[i] > ele)
//				{
//					count++;
//				}
//			}
//			cout<<"Total number that are stricty greater then ele:"<<count<<endl;
			cout<<"Check the given array is sorted or not:"<<endl;
			int arr[5];
			//for inout
			for(int i=0;i<5;i++)
			{
				cin>>arr[i];
			}
			
			//output
			bool isflag=true;
			for(int i=0;i<5;i++)
			{
				if (arr[i] <= arr[i-1])
				{	
					isflag=false;
				}
			}
			cout<<"The given array is:"<<isflag<<endl;
}
