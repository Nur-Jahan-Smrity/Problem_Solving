//A. Odd Set_729_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    ll n,i,j,store=0,odd=0,even=0;
    cin>>n;
    ll a[n*2]={0};
    n=n*2;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    if(odd==even)
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
