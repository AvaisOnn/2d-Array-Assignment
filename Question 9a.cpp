#include<iostream>

using namespace std;

int main()
{
	int rows, cols, size;
	int sum = 0;

	cout<<"Please enter the size of square Matrix: ";
	cin>>size;
	rows=size;
	cols=rows;
	
	int arr[rows][cols];
	
	cout<<"Please Enter the values in Array"<<endl;
	
	for(int i=0; i<size;i++)
	{
		for( int j=0; j< size; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Your 2D Array is: "<<endl;

	for(int i=0; i<size;i++)
	{
		for( int j=0; j< size; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
	cout<<endl;
	}
	
	for(int i=0;i<size;i++){
		for( int j=0;j<size; j++){
			if(i==j)
			{
				sum=sum+arr[i][j];
			}
		}
	}

	cout<<"\nYour Left diagonal sum is: "<<sum<<endl;

	return 0;
}
