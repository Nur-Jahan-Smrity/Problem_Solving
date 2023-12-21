//CF_B_
#include<bits/stdc++.h>
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define pi (3.141592653589)
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    long long n,i,j,count=0,a,b,c,even=0,odd=0;
    cin>>n;
    ll ar[n+10]={0};
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0)
            even+=ar[i];
        else
            odd+=ar[i];

    }
   // cin>>a>>b>>c;
    if(even>odd)
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
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*

*/
