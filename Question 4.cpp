#include <iostream>

using namespace std;

int main()
{
	const int size=5;
	int evenCount, oddCount=0;
	int arr[size];
	int even[size];
	int odd[size];
	
	cout<<"Please Enter 5 Digits in the Array.\n";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			even[evenCount]=arr[i];
			evenCount++;
		}
		else
		{
			odd[oddCount]=arr[i];
			oddCount++;
		}
	}
	
	if(evenCount==0)
	{
		cout<<"\nThere are no Even Numbers in Array. \n";
	}
	else
	{
	cout<<"The Even Numbers are:"<<endl;
		for(int i=0;i<evenCount;i++)
		{
			cout<<even[i]<<"\t";
		}
	}

	if(oddCount==0)
	{
		cout<<"\nThere are no Odd Numbers in Array. \n";
	}
	else
	{
	cout<<"\nThe Odd Numbers are:"<<endl;	
		for(int i=0;i<oddCount;i++)
			{
				cout<<odd[i]<<"\t";
			}
	}
return 0;
}
