#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int counter=0;counter<=n;counter++)
    {
        sum=sum+counter;
    }
    cout<<sum;
    return 0;
}
