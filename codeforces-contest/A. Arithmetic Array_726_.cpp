//A. Arithmetic Array_726_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    ll n,i,j,count=0,sum=0;
    cin>>n;
    ll a[n+10]={0};
   // unordered_map<ll,ll>mp;

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(n==sum)
        cout<<"0"<<endl;
    else if(sum<n)
        cout<<"1"<<endl;
    else
    {
        cout<<sum-n<<endl;
    }
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
4
3
1 1 1
2
1 2
4
8 4 6 2
1
-2

*/
