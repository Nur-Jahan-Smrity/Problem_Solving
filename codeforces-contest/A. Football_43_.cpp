//A. Football_43_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void test()
{
    long long t;
    cin>>t;
    ll i,j,n,maxx=-1;
    map<string,int>mp;
    string s,ans="";

    while(t--)
    {
       cin>>s;
       mp[s]++;
    }
    for(auto it:mp)
    {
      if(maxx<it.second)
      {
          maxx=it.second;
          ans=it.first;
      }
    }
    cout<<ans<<endl;
}

int main()
{


    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*

*/
