#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"before swapping"<<endl;
    cin>>a;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}