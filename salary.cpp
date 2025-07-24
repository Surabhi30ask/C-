#include<iostream>
using namespace std;
int main()
{
    float a ,b;
    cout<<"initial salary of male"<<endl;
    cin>>a;
    cout<<"initial salary of female"<<endl;
    cin>>b;
    cout<<"salary of male after bonus"<<endl;
    cout<<(a*0.05)<<endl;
    cout<<"salary of female after bonus"<<endl;
    cout<<(b*0.1)<<endl;
    if(a<10000)
    {
        cout<<(a*0.05*0.02);
    }
     if(b<10000)
    {
        cout<<(b*0.1*0.02);
    }
    return 0;
}