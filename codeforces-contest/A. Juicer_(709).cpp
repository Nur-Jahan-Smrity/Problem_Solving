#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int a[x+10],i,j,sum=0,count=0;
    for(i=0;i<x;i++)
    {
       cin>>a[i];
       if(a[i]>y)
         continue;
       sum+=a[i];
       if(sum>z)
       {
          count++;
          sum=0;
       }
    }
    cout<<count<<endl;
    //cout<<endl;
    return 0;
}
