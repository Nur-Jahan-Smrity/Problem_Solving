//pair sort.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    ll i,j,n,m;
    bool flag=0;
    cin>>n>>m;
    pair<int,int>pp[1000];
    for(i=0;i<m;i++)
    {
        cin>>pp[i].first>>pp[i].second;
    }
    sort(pp,pp+m);
    //prothom number er upor depend kore sort korbe .. jodi prothom number same thakae oi khetre 2nd number er upor depend kore sort korbe ..
    for(i=0;i<m;i++)
    {
       if(n<=pp[i].first)
       {
           flag=1;
           break;
       }
       else
       {
           n+=pp[i].second;
       }
    }
    if(flag)
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
        //cin.ignore();

    }

}

int main()
{


    //int n = sizeof(arr) / sizeof(arr[0]);
    //test();
    solve();
}
/*

*/
