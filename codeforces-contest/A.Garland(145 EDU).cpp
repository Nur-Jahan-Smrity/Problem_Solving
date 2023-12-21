#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#define nl "\n"
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define debug(x) cout<<#x<<" = "<<x<<nl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define pi (3.141592653589)
#define setafter fixed << setprecision
#define NO             cout << "NO" << endl;
#define Yes            cout << "Yes" << endl;
#define No             cout << "No" << endl;
#define yes            cout << "yes" << endl;
#define no             cout << "no" << endl;
#define YES            cout << "YES" << endl;
// reverse(s.begin(), s.end());
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
void fillPrefixSum(ll arr[], ll n, ll prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
void solve()
{
    long long n,i,j,count=0,p=0;
    string s;
    cin>>s;
    map<int,int>mp;
    ll a[n+10]= {0};
    int max=1;
    if(s[0]==s[1] && s[1]==s[2] && s[2]==s[3])
        cout<<"-1"<<endl;
    else
    {
        for(i=0; i<4; i++)
        {
            mp[int(s[i]-'0')]++;
        }
        for(auto it:mp)
        {
            if(it.second>max)
            {
                max=it.second;
                p=it.first;
            }

            count++;
        }
        if(max==3){
            cout<<"6"<<endl;
        }
        else
        cout<<"4"<<endl;
    }



    /*for(auto it:mp)
        cout<<it.first<<"-"<<it.second<<endl;*/
    /*
    ///sort a string =>
    ///sort(all(s));
    /// cout<<nl;
    ///debug(f);
    #include <iostream>
    #include <iomanip>
    #include <cmath>
    #include <limits>
    using namespace std;

    int main()
    {
    const long double pi = acos(-1.L);
    cout << "default precision (6): " << pi << '\n'
              << "setprecision(10): " << setprecision(10) << pi << '\n'
              << "max precision:"
              << setprecision(numeric_limits<long double>::digits10 + 1)
              << pi << '\n';
    return 0;
    }
    */

    /*
    ///string to integer ...
    int s=0;
    string s1;
    cin>>s1;
    stringstream value(s1);
            value>>s;

    ///last element of string ...
    s1.back()-'0';

    ///delete last element of string ..
     s1.pop_back();
     ///str.erase( str.end()-1 );  // it is also used to erase last character..

     ///string.rbegin() .. it is used to reverse the string ..
    */
    /*ll arr[n+10]={0};
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll prefixSum[n];
    fillPrefixSum(arr, n, prefixSum);
    for (int i = 0; i < n; i++)
        cout << prefixSum[i] << " ";
    */
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

*/
