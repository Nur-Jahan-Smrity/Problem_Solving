//cf_1761_a.cpp
//A. Two Permutations
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
void fillPrefixSum(ll arr[], ll n, ll prefixSum[])
{
	prefixSum[0] = arr[0];
	// Adding present element with previous element
	for (int i = 1; i < n; i++)
		prefixSum[i] = prefixSum[i - 1] + arr[i];
}
void solve()
{
    long long n,i,a,b;
    cin>>n>>a>>b;
    if(n==a && a==b)
    {

             cout<<"Yes"<<endl;
    }
    else if(n==3)
        cout<<"No"<<endl;

     else{
    
       int ppp=0;
       if(n%2==0)
       {ppp=((n/2)-1)+((n/2)-1);}
       else
        {ppp=((n/2))+((n/2))-1;}

        if((a+b)<=ppp)
         cout<<"Yes"<<endl;
        else
             cout<<"No"<<endl;
     }

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
