#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int n,i,j,b=0,c=0,d=0,s=0;
    
    cin>>n;
    int a[n+10],e[10000],f[10000],g[10000];
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
       if(a[i]==1)
       {
         e[b]=i;
         b++;
       }
       if(a[i]==2)
       {
         f[c]=i;
         c++;
       }
       if(a[i]==3)
       {
         g[d]=i;
         d++;
       }
        
    }
    s=min(b,min(c,d));
    cout<<s<<endl;
    for(j=0;j<s;j++)
    {
       cout<<e[j]<<" "<<f[j]<<" "<<g[j]<<endl;
    }  
    return 0;
}
