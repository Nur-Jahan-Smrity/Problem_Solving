//prime factor
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
void sieve(int n)
{
    //mark=1 (not prime) ..
    //mark=0  (prime) ..
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    mark[2] = 0;
    prime[nPrime++] = 2;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    //prime[nPrime++] = 2;

    for(i = 3; i <= n; i+=2)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
void solve(long long n)
{
   ll i,j;

   vector<long long>v;
   for(i=0;prime[i]<=sqrt(n);i++)
   {
       //cout<<prime[0]<<endl;
       while(n%prime[i]==0)
       {
          // cout<<prime[i]<<endl;
           v.push_back(prime[i]);
           n/=prime[i];
       }
   }
   if(n>1)
   {
       //cout<<n<<endl;
         v.push_back(n);
   }
   for(i=0;i<v.size();i++)
   {
       if(i<v.size()-1)
        cout<<v[i]<<" * ";
        else
        {
            cout<<v[i]<<endl;
        }
   }
}
void test()
{
    long long t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        solve(n);
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  sieve(100005);
   test();
   // solve();
}
/*
2

24
2*2*2*3


10
2*5

*/
