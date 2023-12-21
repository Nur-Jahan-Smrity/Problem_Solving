//cf_A. Beautiful Sequence_1810_.cpp
#include<bits/stdc++.h>
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
void solve()
{
    long long n,i,j,count=0,one=0;
    cin>>n;
    ll a[n+10]= {0};
    map<long long, long long>mp;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
       if(a[i]<=i)
            count++;
        //mp[a[i]]++;
    }
   /* for(i=1; i<=n; i++)
    {

        if(mp[a[i]]==a[i])
        {
             count++;
             break;
        }
    }*/
    if(count)
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
input
7
3
3 2 1
4
2 4 3 5
5
2 3 5 5 6
2
3 1
5
2 4 5 2 3
4
5 6 7 8
6
6 5 4 3 2 1

output
YES
YES
NO
YES
YES
NO
YES
*/
