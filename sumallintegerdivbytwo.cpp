#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"enter the number"<<endl;
    cin>>a;
    cout<<"enter the number"<<endl;
    cin>>b;
    int sum=0;
    for(i=a;i<=b;i++)
    if(i%2==0)
    {
        sum=sum+i;
    }
    cout<<"the sum is:"<<endl<<sum<<endl;
    return 0;
}