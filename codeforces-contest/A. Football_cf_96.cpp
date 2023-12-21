//A. Football_cf_96.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    ll i,j=0,maxx=0,count=0;
    string s;
    cin>>s;
    for(i=1; i<s.size(); i++)
    {
        if(s[i-1]==s[i])
            count++;
        else
        {
            maxx=max(maxx,count+1);
           // cout<<maxx<<" "<<count+1<<endl;
            count=0;
        }
       //cout<<count<<endl;

    }
    if(maxx>=7 || count+1>=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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
