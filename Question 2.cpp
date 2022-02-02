#include <iostream>

using namespace std;

int main(){
	const int size=10;
	int arr[size];
	int temp=0;
	cout<<"Please Enter "<<size<<" Digits in the Array.\n";
	
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Your Array is: \n";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	cout<<"Your Array in Ascending Order is given below: \n";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
