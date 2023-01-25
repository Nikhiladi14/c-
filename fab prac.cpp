#include<iostream>
using namespace std;
int main()
{
	int
	firstnumber=-1,secondnumber=1,i,n,sum;
	cout<<"enter the number of terms";
    cin>>n;
    for(i=0;i<n;i++)
    {
    	sum=firstnumber+secondnumber;
    	cout<<sum<<endl;
    	firstnumber=secondnumber;
    	secondnumber=sum;
	}
    
}