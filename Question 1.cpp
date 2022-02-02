#include <iostream>

using namespace std;

int main(){
	const int size=6;
	int data[size];
	cout<<"Please Enter Data into the Array.\n";
	for(int i=0;i<size;i++)
	{
		cin>>data[i];
	}
	cout<<"The Array in Original Order is given below:\n";
	
	for(int i=0;i<size;i++)
	{
		cout<<data[i]<<"\t";
	}
	cout<<"\nThe Array in reverse Order is given Below: \n";
	for(int j=size;j>0;j--)
	{
		cout<<data[j-1]<<"\t";
	}
	return 0;
}
