#include<iostream>
using namespace std;
int main()
{
	int n,i=1,sum=0;
	cout<<"enter a number";
	cin>>n;
	while(i<n)
	{
		if(n%i==0)
		sum=sum+i;
		i++;
	}
	if(sum=n)
	{
		cout<<"number is perfect number";
	}
	else{
		cout<<"number is invalid";
	}
}