//B. Gregor and the Pawn Game_736_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0,ans=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(i=0; i<n; i++)
    {
        //b er condition 2nd e dile wrong output ashe ..
        if(b[i]=='0')
        {
            continue;
        }
        if(a[i]=='0')
        {
            ans++;
            continue;
        }
        /*
        if(b[i]=='0')
        {
            continue;
        }*/
        if(i-1>=0 && a[i-1]=='1')
        {
            ans++;
            a[i-1]='5';
            continue;
        }
        if(i+1<n && a[i+1]=='1')
        {
            ans++;
            a[i+1]='5';
            continue;
        }
    }
    cout<<ans<<endl;

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

*/
