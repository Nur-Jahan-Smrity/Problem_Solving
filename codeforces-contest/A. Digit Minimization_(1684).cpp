#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{


    string s;
    cin>>s;

    long long i,j,k=0;
    char minn=60;

    for(i=0;i<s.size();i++)
    {
        minn=min(minn,s[i]);

    }
    if(s.size()==2)
        cout<<s[1]<<endl;
    else
     cout<<minn<<endl;

}
void test()
{
    long long t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();
    //solve();
}
