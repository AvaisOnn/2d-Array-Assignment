#include<iostream>

using namespace std;

int main()
{
	int size=5;
	int arr[size];
	int dupCounter=0;
	cout<<"Please Enter any 5 Digits."<<endl;
	
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<arr[i]<<"\t";
				dupCounter++;
			}
		}
	}
	
	if(dupCounter!=0)
	{
		cout<<"\n There are "<<dupCounter<<" Duplicate Entries.\n ";
	}
	else{
		cout<<"There are no Duplicate Entries in the Array. \n";
	}
	
	return 0;
}
