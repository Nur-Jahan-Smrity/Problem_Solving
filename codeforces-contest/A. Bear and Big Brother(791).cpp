#include<iostream>
using namespace std;

int main()
{
    int a,b,i,k=0;
    cin>>a>>b;
    while(a<=b)
    {
       a*=3;
       b*=2;
       k++;
    }
    cout<<k<<endl;
    return 0;
}
