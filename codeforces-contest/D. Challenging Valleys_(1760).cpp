//D. Challenging Valleys_(1760).cpp
#include<bits/stdc++.h>
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
    long long j,i,n;
    cin>>n;
    ll a[n+10]= {0},count=0,c=0;
    vector<ll>v;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0)
            v.push_back(a[i]);
        if(i>0 && a[i-1]!=a[i])
            v.push_back(a[i]);
    }
    ///for example => 3 2 2 1 2 2 3
    ///v => 3 2 1 2 3
    if(v.size()==1 || n==1)
    {
         cout<<"YES"<<endl;
         return;
    }
    for(int i=0; i<v.size(); i++)
    {
        if(i==0 && v[i]<v[i+1])
            c++;
        else if(i==v.size()-1 && v[i]<v[i-1])
            c++;
        else if( v[i]<v[i-1] && v[i]<v[i+1])
            c++;
    }
    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    //sort(a2,a2+n,greater<ll>());
    /* for(i=0; i<n; i++)
     {
         int  l=0,ss=0;
         int r=0;
         for(j=i+1; j<n; j++)
         {
             if(a1[i]==a1[j])
             {
                 if((i-1) >0 && ss==0)
                 {
                     l=i-1;
                     ss++;
                 }

                // cout<<" inside loop er l er value : "<<l;
                 //cout<<endl;
                 // cout<<l<<" sdfgvf ";
                  r=j;
                 c++;
             }
             else
                 break;
         }
         if(n==1)
         {
             count=0;c=1;
             break;
         }
         if(l==0 &&  a1[r+1]> a1[r])
             count++;
         else if(r==n-1 && a1[l]>a1[l+1])
             count++;
         else if( a1[l]>a1[l+1] && a1[r+1]> a1[r])
             count++;

     }

     if(count==1 && c>0)
         cout<<"YES"<<endl;
     else
         cout<<"NO"<<endl;*/

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
input

6
7
3 2 2 1 2 2 3
11
1 1 1 2 3 3 4 5 6 6 6
7
1 2 3 4 3 2 1
7
9 7 4 6 9 9 10
1
1000000000
8
9 4 4 5 9 4 9 10

output
YES
YES
NO
YES
YES
NO
*/

