#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the year"<<endl;
    cin>>n;
    if(n%4==0)
    {
        cout<<"its a leap year"<<endl;
    }
    else{
        cout<<"not a leap year"<<endl;
    }
    return 0;
}