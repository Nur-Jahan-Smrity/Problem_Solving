#include<iostream>
using namespace std;
int main()
{
    int n,h,a,i,j,c=0,p[1000],q[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>h>>a;
       p[i]=h;
       q[i]=a;
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
          if(p[i]==q[j])
             c++;
       }
    }
    cout<<c<<endl;
    return 0;
}
