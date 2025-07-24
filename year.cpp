#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of days:"<<endl;
    cin>>n;
    cout<<"years:"<<endl<<n/365<<endl;
    cout<<"months:"<<endl<<(n%365)/30<<endl;
    cout<<"weeks:"<<endl<<((n%365)%30)/7<<endl;
    cout<<"days:"<<endl<<((n%365)%30)%7<<endl;
}