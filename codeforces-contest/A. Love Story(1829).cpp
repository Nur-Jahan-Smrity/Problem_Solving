//cf_1829_A. Love Story
#include<bits/stdc++.h>
  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    long long n,i,j,count=0;
    //cin>>n;
    string s="codeforces",s1;
    cin>>s1;
    ll a[n+10]={0};
    for(i=0; i<10; i++)
    {
      if(s1[i]!=s[i])
        count++;
    }
    cout<<count<<endl;
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
