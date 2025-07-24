#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"max value to print odd number:";
    cin>>number;
    cout<<"\nlist of odd number from 1 to" <<number<<"are\n";
    for(int i=1;i<=number;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
        
    }
    return 0;
}