//B. Taxi_158.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0,sum=0,store=0;
     cin>>n;
    ll a[n+10]= {0};
    map<int,int>mp;
    ll x = INT_MAX, y = INT_MAX, z = INT_MAX;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        //sum+=a[i];
    }
    count+=mp[4];
    while(mp[1]!=0 && mp[3]!=0)
    {
        mp[1]-=1;
        mp[3]-=1;
        count+=1;
    }
     if(mp[1]==0 && mp[3]!=0)
     {
         count+=mp[3];
     }
     count+=mp[2]/2;
      if(mp[2]%2!=0)
      {
          if(mp[1]<=2)
          {
              count+=1;
              mp[1]=0;
              mp[2]=0;
          }
          else{
            mp[1]-=2;
            count+=1;
            mp[2]=0;
          }

      }
      if(mp[1]!=0)
      {
          count+=mp[1]/4;
          if(mp[1]%4!=0)
          {
              count+=1;
          }
      }
      cout<<count<<endl;

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //j++;
        solve();
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    //test();
    solve();
}
/*
input
5
1 2 4 3 3
output
4
input
8
2 3 4 4 2 1 3 1
output
5
*/
