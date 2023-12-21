//D:\all codes\uri_1256_hash_table.cpp

#include<bits/stdc++.h>

#define nl "\n"
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
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
    long long n,m,i,j,count=0,source,destination,maxx=-1,nm,store=0,tt=0;
    //cout<<"enter no of node and edge : ";
    cin>>n>>m;
    //cout<<endl;
    vector<int>G[100];
    for(i=0; i<m; i++)
    {
        cin>>nm;
        store=nm%n;
        G[store].push_back(nm);

    }

    // cout<<"enter "<<edge<<" source and destination : "<<endl;
    /* while(edge--)
     {
         cin>>source>>destination;
         if(maxx<source)
             maxx=source;
          if(maxx<destination)
             maxx=destination;
         //because it is bidirectional graph ..
         G[source].push_back(destination);
         G[destination].push_back(source);

     }*/
    for(i=0; i<n; i++)
    {
        cout<< i<< " -> ";
        for(j=0; j<G[i].size(); j++)
        {

            cout<<G[i][j]<<" -> ";


        }

        cout<<"\\"<<endl;


    }
    //cout<<endl;

    //   cout<<setafter(2)<<endl;

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
        if (t > 0){
             //   printf("Check");
            cout << endl;
        }
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

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    // solve();
}
/*
Sample Input
2
13 9
44 45 49 70 27 73 92 97 95
7 8
35 12 2 17 19 51 88 86

Sample Output
0 -> \
1 -> 27 -> 92 -> \
2 -> \
3 -> \
4 -> 95 -> \
5 -> 44 -> 70 -> \
6 -> 45 -> 97 -> \
7 -> \
8 -> 73 -> \
9 -> \
10 -> 49 -> \
11 -> \
12 -> \

0 -> 35 -> \
1 -> \
2 -> 2 -> 51 -> 86 -> \
3 -> 17 -> \
4 -> 88 -> \
5 -> 12 -> 19 -> \
6 -> \
*/
