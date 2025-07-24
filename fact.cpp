#include<iostream>
using namespace std;
int main()
{
    int a,fact=1,i;
    cout<<"enter the number"<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    cout<<"the fact is"<<endl<<fact;
    return 0;
}