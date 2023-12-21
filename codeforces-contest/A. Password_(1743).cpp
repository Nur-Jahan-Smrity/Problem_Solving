//div2_a...
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
int cal_n(int n){
   int te = 1;
   for (int i = 2; i <= n; i++)
      te = te* i;
   return te;
}
int nCr(int n, int r){
   return cal_n(n) / (cal_n(r) * cal_n(n - r));
}
void solve()
{

    long long i,j,n;
   
    cin>>n;
   long long arr[n+5]= {0},num=0;
   num=10-n;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
     cout<<(nCr(num, 2))*6<<endl;
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
    
}

