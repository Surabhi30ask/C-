#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
        cout<<"not prime"<<endl;
        break;
        }
    }
    if(i==n)
    {
        cout<<"prime"<<endl;
    }
    return 0;
}