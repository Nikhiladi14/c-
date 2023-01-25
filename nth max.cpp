#include <iostream>
using namespace std;
int main()
{
    int i,n,a[10],max;
    cout<<"enter the number of entities:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the numbers"<<i+1<<"=";
    cin>>a[i];
    }
    sort(a,a+i);
    cout<<"shorted array:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<"enter the mth maximun number :";
    cin>>max;
    cout<<"\nthe "<<max<<"th maximum number is:"<<a[n-max];m
    
}