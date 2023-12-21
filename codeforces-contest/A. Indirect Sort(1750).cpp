#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    long long n,one=0,zero=0,solv=0,ans=0,i,j,temp=0,one_temp=0,count1=0,count2=0;
    cin>>n;
    ll arr[n+5]={0};
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    temp=arr[0];
    sort(arr,arr+n);
    if(arr[0]!=temp)
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
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();
    //solve();
}
/*

*/
