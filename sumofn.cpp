#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    sum=sum+i;
    cout<<sum;
}