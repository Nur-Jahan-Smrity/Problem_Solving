//B. Atilla's Favorite Problem_(1760).cpp
#include<bits/stdc++.h>
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
using namespace std;
typedef long long ll;
//int j=0;
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
    long long j,i,n;
    cin>>n;
    string st;
    cin>>st;
    /*char maxx = 'a';
    char minn='a';

    // find largest alphabet
    for (int i=0; i<st.size(); i++)
    {
         if (st[i] > maxx)
            maxx = st[i];
    }
    cout<<int(maxx)-int(minn)+1<<endl;
    */
    sort(all(st));
    cout<<st[n-1]-'a'+1<<endl;


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
inputCopy
5
1
a
4
down
10
codeforces
3
bcf
5
zzzzz
outputCopy
1
23
19
6
26
*/

