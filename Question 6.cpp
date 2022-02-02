#include <iostream>

using namespace std;

int main()
{
	int cols=3;
	int rows=3;
	int arr2D[rows][cols];
	int sumRow=0;
	int sumCol=0;
	int sumRightDia=0;
	int sumLeftDia=0;
//	int size=rows;
	
	bool square=false;
/*	bool rowSum=false;
	bool colSum=false;
	bool rightDia=false;
	bool leftDia=false;
*/	
	cout<<"Please Enter the Rows: ";
	cin>>rows;
	cout<<"Please Enter Columns: ";
	cin>>cols;
	cout<<endl;
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cin>>arr2D[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Your 2D Array is: "<<endl;
	
	for(int i=0; i<rows; i++)
	{
		for( int j=0; j<cols; j++)
		{
			cout<<arr2D[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	for(int i=0; i<rows; i++)
	{
		for( int j=0; j<cols; j++)
		{
			sumRow+=arr2D[i][j];
			sumCol+=arr2D[j][i];
			
			if(i==j)
			{
				sumRightDia+=arr2D[i][j];
			}
			if((cols-1)==(i+j))
			{
				sumLeftDia+=arr2D[i][j];
			}
		}
	}
	{
		if(rows!=cols)
			{
				cout<<"It is not Square.";
			}
			else{
				square=true;
			}
	}
	
	if(sumRow==sumCol && sumRightDia==sumLeftDia && square==true)
	{
		cout<<"It is a SQuare Matrix."<<endl;
	}
	else{
		cout<<"It is not a SQuare One."<<endl;
	}
	
	
	return 0;
}
