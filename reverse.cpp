#include<iostream>
using namespace std;
int main()
{
    int a,rev=0,remainder;
    cout<<"enter the number a"<<endl;
    cin>>a;
    while(a!=0)
    {
        remainder=a%10;
        rev=rev*10+remainder;
        a=a/10;
    }
    cout<<"the reversed number is"<<endl<<rev;
}