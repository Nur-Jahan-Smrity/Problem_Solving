//A. The Ultimate Square_(1748).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
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
using namespace std;
typedef long long ll;
//int j=0;
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
void solve()
{
    ll x;
    cin>>x;
    cout<<(x+1)/2<<endl;
    //or =>
    /*
    cin>>x;
    if(x%2)x++;
      cout<<x/2<<nl;
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
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     test();
    //solve();
}
/*
input
3
2
5
197654321
output
1
3
98827161
*/
