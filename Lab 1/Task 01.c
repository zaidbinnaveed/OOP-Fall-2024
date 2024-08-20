#include<iostream>
using namespace std;

int main()
{
	int n;
	int prime = 0;
	cout << "Enter an integer value: ";
	cin>>n;
		for(int i=0;i<n/2;i++)
		{
		if(n%(i+1)==0)
			{
		prime = 1;
		}
		else
		{
			prime = 0;
		}
		}
	
	if(prime==1)
	{
	    cout<<"Entered number is not a prime ";
	}
	else if(prime==0)
	{
	    cout<<"Entered number is a prime ";
	}
	return 0;
}
