#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number"<<endl;
    cin>>n;
    int sum=0;
    while(n>0)
    {
        m=n%10;
        n=n/10;
        sum=sum+m;
        
    }
    cout<<"the sum is"<<
    endl<<sum<<endl;
}