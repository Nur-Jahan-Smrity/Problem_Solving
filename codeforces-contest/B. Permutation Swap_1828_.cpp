//B. Permutation Swap_1828_.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
/*bool lucky(int n)
{

    string s=to_string(n);
    for(auto it:s)
    {
        if(it!='4' && it!='7')
            return false;
        return true;
    }

}*/
void solve()
{
    long long n,i,j,count=0,sum=0,minn=0;
    string s;
    cin>>n;
    ll a[n+10]={0};
   for(i=1;i<=n;i++)
   {
       cin>>a[i];
       sum=abs(i-a[i]);
       if(sum>0)
       {
           minn=__gcd(sum,minn);
       }
   }
   cout<<minn<<endl;

    //string to nummber

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
