#include <iostream>

using namespace std;

//void upperHalf(int arr[][10], int);

int main()
{
	int size;
	int ROWS=10;
	int COLS=10;
	int arr[ROWS][COLS];
	cout<<"Please Enter the Size of Matrix: ";
	cin>>size;
	
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Your 2D Array is: "<<endl;
	
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"Your Upper Half Array is: "<<endl;
	//upperHalf(arr, size);
	
	for(int i=0;i<size;i++)
	{
		for(int j=0; j<size;j++)
		{
			if(j>=i){
				cout<<arr[i][j]<<"\t";
			}
			else{
				cout<<"\t";
			}
		}
		cout<<endl;
	}

return 0;
}
/*
void upperHalf(int arr[][10], int size){

	
}*/
		
