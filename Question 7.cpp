#include<iostream>

using namespace std;
	//Please Add the Values for skipping the steps less than 3.

int main()
{
	int rows=3;
	int cols=3;
	int size=3;
	int choice;
	int rowno;
	int colno;
	int index=0;
	
	int arr[rows][cols];
	
	cout<<"Please Enter the Array Elements.\n";
	
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Your 2D Array is: \n";
	
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
		
	cout<<"Please Enter 1 for Row change and 2 for column Change."<<endl;
	cin>>choice;
		
	if(choice==1)
	{
	cout<<"Please Enter the Row you want to Skip Element from: ";
	cin>>rowno;
	rowno=rowno-1;
	int step;
	cout<<"Please Enter the Steps: ";
	cin>>step;
	
	for(int i=rowno;i<(rowno+1);i++)	
	{
		for(int j=0;j<step;j++)
		{
			index=arr[i][j];
			arr[i][j]=arr[i][j+1];
			arr[i][j+1]=index;
		}
	}
	
	cout<<"Your Array After the Row Skip will be: "<<endl;
	
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}

	if(choice==2)
	{
	cout<<"Please Enter the Column you want to Skip Element from: ";
	cin>>colno;
	colno=colno-1;
	int step;
	cout<<"Please Enter the Steps: ";
	cin>>step;
	
	for(int j=colno;j<(colno+1);j++)
	{
		for(int i=0;i<step;i++)
		{
			index=arr[i][j];
			arr[i][j]=arr[i+1][j];
			arr[i+1][j]=index;
		}
	}
	
	cout<<"Your Array After the Column Skip will be: "<<endl;
	
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	}
	return 0;
}
