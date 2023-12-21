#include<iostream>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int a[n+5],i,j=0;
    for(i=0;i<n;i++)
    {
       cin>>a[i];
       if(a[i]<=h)
         j++;
       else
         j+=2;
    }
    cout<<j<<endl;
    return 0;
}
