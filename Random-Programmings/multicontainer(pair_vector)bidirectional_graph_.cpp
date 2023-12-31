//D:\all codes\multicontainer(pair_vector)bidirectional_graph_.cpp
//pair vector used
//use of pair vector , can be used to solve graph related problem...
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
    long long node,edge,i,j,count=0,source,destination,weight,maxx=-1;
    cout<<"enter no of node and edge : ";
    cin>>node>>edge;
    //cout<<endl;
    vector<pair<int,int>>G[100];
    cout<<"enter "<<edge<<" source and destination with their weight : "<<endl;
    while(edge--)
    {
        cin>>source>>destination>>weight;
        if(maxx<source)
            maxx=source;
         if(maxx<destination)
            maxx=destination;
        //because it is bidirectional graph ..
        G[source].push_back(make_pair(destination,weight));
        G[destination].push_back(make_pair(source,weight));

    }
    for(i=1; i<=maxx; i++)
    {
        cout<<"connected node with node " << i<< "  are    ==>> "<<endl;
        for(j=0;j<G[i].size();j++)
        {
           cout<<i<<" with node : "<<G[i][j].first<<" with cost -> "<<G[i][j].second<<endl;
        }
        cout<<endl;
    }
    cout<<endl;

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
1
enter no of node and edge : 3 3
enter 3 source and destination with their weight :
1 4 5
4 9 6
9 1 7
connected node with node 1  are    ==>>
1 with node : 4 with cost -> 5
1 with node : 9 with cost -> 7

connected node with node 2  are    ==>>

connected node with node 3  are    ==>>

connected node with node 4  are    ==>>
4 with node : 1 with cost -> 5
4 with node : 9 with cost -> 6

connected node with node 5  are    ==>>

connected node with node 6  are    ==>>

connected node with node 7  are    ==>>

connected node with node 8  are    ==>>

connected node with node 9  are    ==>>
9 with node : 4 with cost -> 6
9 with node : 1 with cost -> 7
*/
