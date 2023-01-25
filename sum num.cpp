#include<iostream>
using namespace std;
int main()
{
    int num,a,b=0,temp;
    cout<<"enter the number to find the sum of digits:";
    cin>>num;
    a=num;
    while(a!=0)
    {
        temp=a%10;
        b+=temp;
        a/=10;
    }
    cout<<" the sum of digits:"<<b<<endl;
}