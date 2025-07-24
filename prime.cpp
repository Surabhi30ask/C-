#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"non prime\n";
            break;
        }
    }
    if(i==n){
    cout<<"prime\n";}
    if(n==1){
        cout<<"Neither prime nor composite";
    }
    return 0;
}