#include<iostream>
using namespace std;

int main()
{
	int n;
	int prime = 0;
	cout << "Enter an integer value: ";
	cin>>n;
	if(n==1)
	{
	    cout <<n<<" is not a prime number";
	}
	if(n!=1)
	{
		for(int i=0;i<n/2;i++)
		{
		if(n%(i+1)==0)
		{
		prime = 1;
		break;
		}
		else
		{
			prime = 0;
			break;
		}
		}
			if(prime==1)
	{
	    cout <<n<< " is not a prime";
	}
	else if(prime==0)
	{
	    cout <<n<< " is a prime";
	}
	}

	return 0;
}
