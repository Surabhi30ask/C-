#include<iostream>
using namespace std;
int main()
{
    int a,rev=0,remainder,n;
    cout<<"enter the number a"<<endl;
    cin>>n;
    a=n;
    while(a!=0)
    {
        remainder=a%10;
        rev=rev*10+remainder;
        a=a/10;
    }
    if(n==rev){
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not paindrome"<<endl;
    }
    return 0;
}