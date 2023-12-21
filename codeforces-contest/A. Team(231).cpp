#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c,i,k=0;
    cin>>n;
    
    while(n--)
    {
       cin>>a>>b>>c;
       if((a==b && a==1)|| (b==c && b==1)|| (c==a && c==1))
         k++;
    }
    cout<<k<<endl;
    return 0;
}
