//B. Array Reodering_EDU(110)_.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0;
    cin>>n;
    //ll a[n+10]={0};
    ll x,ans=0,anss=0,p=1;
    vector<int>v1,v2;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x%2==0)
            v1.push_back(x);
        else
            v2.push_back(x);
    }
    for(i=0; i<v1.size(); i++)
    {
        ans+=n-p;
        p++;
    }
    sort(v2.begin(),v2.end());
    for(i=0; i<v2.size(); i++)
    {
        for(j=i+1; j<v2.size(); j++)
        {
            if(__gcd(v2[i],v2[j])>1)
                anss++;
        }
    }
    cout<<ans+anss<<endl;
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
