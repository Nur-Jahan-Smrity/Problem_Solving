///C. Advantage_(1760).cpp
#include<bits/stdc++.h>
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
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
     ///sort a string =>
    ///sort(all(s));
    long long j,i,n;
    cin>>n;
    ll a1[n+10]={0},a2[n+10]={0};
    for(i=0;i<n;i++)
    {
        cin>>a1[i];
        a2[i]=a1[i];
    }
    sort(a2,a2+n,greater<ll>());
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a1[i]<a2[j])
            {
                cout<<a1[i]-a2[j]<<" ";
                break;
            }
            else if(a1[i]==a2[j])
            {
                cout<<a1[i]-a2[j+1]<<" ";
                break;
            }
        }
    }
    cout<<endl;
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
4
4 7 3 5
2
1 2
5
1 2 3 4 5
3
4 9 4
4
4 4 4 4
outputCopy
-3 2 -4 -2
-1 1
-4 -3 -2 -1 1
-5 5 -5
0 0 0 0
*/

