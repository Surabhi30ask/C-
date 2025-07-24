#include<iostream>
using namespace std;
int main()
{
    int a,temp,sum=0,rem;
    cout<<"enter the number"<<endl;
    cin>>a;
    temp=a;
    while(temp!=0)
    {
        rem=temp%10;
        sum=(sum+(rem*rem*rem));
        temp=temp/10;
    }
    if(temp==sum)
    {
    cout<<a<<"  is an armstrong number"<<endl;
    }
    else
    cout<<a<<"  is not an armstrong number"<<endl;
    return 0;
}