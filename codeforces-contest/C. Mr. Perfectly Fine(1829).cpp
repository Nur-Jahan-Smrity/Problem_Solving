//cf_1829_C. Mr. Perfectly Fine+
#include<bits/stdc++.h>
  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    long long n,i,j,count=0,maxx=0,store=0,sum=0;
    cin>>n;
    //string s="codeforces",s1;
    //cin>>s1;
    ll p,q=0;
    string s;
     map<int,int>mp;
    j=0;
    ll x = INT_MAX, y = INT_MAX, z = INT_MAX;
    for(i=0; i<n; i++)
    {
       cin>>p>>s;
       if(s=="11")
       {
           x=min(p,x);
           count+=2;
       }
        if(s=="01")
       {
           y=min(p,y);
           count++;
       }
        if(s=="10")
       {
           z=min(p,z);
           count++;
       }

    }
    if(min(x,y+z)==INT_MAX)
        cout<<"-1"<<endl;
    else
        cout<<min(x,y+z)<<endl;
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
/*
6
4
2 00
3 10
4 01
4 00
5
3 01
3 01
5 01
2 10
9 10
1
5 11
3
9 11
8 01
7 10
6
4 01
6 01
7 01
8 00
9 01
1 00
4
8 00
9 10
9 11
8 11

*/
