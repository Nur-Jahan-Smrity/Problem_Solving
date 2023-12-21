//A. Do Not Be Distracted!_719_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    ll n,i,j,count=0,sum=0,ans=0;
    cin>>n;
    //ll a[n+10]={0};
   // unordered_map<ll,ll>mp;
    string s;
    cin>>s;
    map<char,int>mp;
    for(i=0;i<s.size();i++)
    {
        mp[s[i]]++;
        char previous=s[i];
        while(previous==s[i])
        {
            i++;
        }
        i--;
        if(mp[previous]>1)
            ans=1;

    }
    if(ans==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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
    test();
    //solve();
}
