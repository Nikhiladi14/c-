#include<iostream>
using namespace std;
int main()
{
    int n,m=0,flag=0,i;
    cout<<"enter the number to check";
    cin>>n;
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            cout<<"number is not a primbe number"<<endl;
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
            cout<<"given number is prime number"<<endl;
        }
    
    return 0;
}