//div2_b...
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return ((a * b) / gcd(a, b));
}
void solve()
{

    long long i,j,n;

   cin>>n;
   if(n%2==0)
   {
       int pp=n/2;
       for(i=1,j=pp+1;i<=pp;i++,j++)
       {
           cout<<j<<" "<<i<<" ";
       }

     
   }
   
   else
   {
       cout<<"1 ";
       for(i=n;i>1;i--)
       {
           cout<<i<<" ";
       }
   }
   cout<<endl;

}
void test()
{
    long long t;
    cin>>t;

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

