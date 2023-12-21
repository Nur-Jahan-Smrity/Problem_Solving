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
    long long n,m,j;
    cin>>n;
    long long arr[n+5]= {0},i;
    string s;
    //  map<long long , long long>mp;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        //  mp[arr[i]]++;
    }
    cin>>s;
    long long count1=0;
    bool p=true;
    for(i=0; i<n; i++)
    {

        int k=arr[i];
        char c=s[i];
        for(j=i+1; j<n; j++)
        {
            if(arr[j]==k && s[j]!=c) /*|| (arr[j]!=k && s[j]==c))*/
            {
                p=false;
                break;
            }
            else
            {
                continue;
            }
        }
    }

    if(p)
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

    test();
    //solve();
}
/*
7
5
2 3 2 4 1
cacta
1
50
a
2
11 22
ab
4
1 2 2 1
aaab
5
1 2 3 2 1
aaaaa
6
1 10 2 9 3 8
azzfdb
7
1 2 3 4 1 1 2
abababb

*/
