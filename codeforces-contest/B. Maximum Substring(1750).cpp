#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
//int j=0;
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
    long long n,one=0,zero=0,solv1=0,ans=0,i,j,solv2=0,solv3=0,zero_temp=0,one_temp=0,count1=0,count2=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='0')
            zero++;
        else
            one++;
    }
    // zero_temp=zero;
    //one_temp=one;

    solv1=zero*one;
    /* for(i=0; i<n; i++)
     {
         if(zero==0)
         {
             ans=one*one;
             break;
         }
         if(one==0)
         {
             ans=zero*zero;
             break;
         }

         if(s[i]=='0')
         {
             count1++;
             for(j=0; j<n; j++)
             {
                 if(s[j]=='0')
                 {
                     count1++;
                 }
                 else
                     break;
             }
         }
    */

    for (int i = 0; s[i] != '\0'; i++)
    {

        // Counting occurrences of s[i]
        long long count = 1;
        while (s[i] == s[i + 1])
        {
            i++;
            count++;
            if(s[i]=='0')
            {
                zero_temp=max(zero_temp,count);
            }
            if(s[i]=='1')
            {
                one_temp=max(one_temp,count);
            }
        }
        // cout << s[i] << count << " ";
    }
    ans=max(zero_temp,one_temp);
    ans=ans*ans;

 if(n==1)
    {
        ans=1;
    }

cout<<max(ans,solv1)<<endl;
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
