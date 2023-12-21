//cf_1829_B. Blank Space
#include<bits/stdc++.h>
  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    long long n,i,j,count=0,maxx=0,store=0;
    cin>>n;
    //string s="codeforces",s1;
    //cin>>s1;
    ll a[n+10]={0};
    for(i=0; i<n; i++)
    {
      cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
      if(a[i]==0)
      {
          store++;
          maxx=max(store,maxx);

      }
      else
        store=0;
    }
    cout<<maxx<<endl;
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
/*
Bitwise Operators in C/C++
  & (bitwise AND)
  | (bitwise OR)
  ^ (bitwise XOR)
  << (left shift)
  >> (right shift)
  ~ (bitwise NOT)
*/
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
5
coolforsez
cadafurcie
codeforces
paiuforces
forcescode

*/
