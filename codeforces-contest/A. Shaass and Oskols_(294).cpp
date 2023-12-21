#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int n,a[100],i,j;
   
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
       int x,y;
       cin>>x>>y;
       
      
         a[x-1]=(y-1)+a[x-1];
         
      
         a[x+1]=(a[x]-y)+a[x+1]; 
        
       
        a[x]=0;   
    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    
    
    return 0;
}
