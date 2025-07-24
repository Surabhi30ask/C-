#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the 1st number"<<endl;
    cin>>a;
    cout<<"enter the 2nd number"<<endl;
    cin>>b;
    cout<<"enter the 3rd number"<<endl;
    cin>>c;
    if(a>=b&&a>=c)
    {
        cout<<"the largest no is"<<a<<endl;
    }
    else if(b>=a&&b>=c)
    {
        cout<<"the largest no is"<<endl<<b<<endl;
    }
    else{
        cout<<"the largest no is"<<c<<endl;
    }
    return 0;
}