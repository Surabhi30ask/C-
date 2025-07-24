#include<iostream>
using namespace std;
int main()
{
    int a,i,j,count=0;
    cout<<"enter the number"<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout<<"the prime number is:"<<i<<endl;
        }
    }    
}