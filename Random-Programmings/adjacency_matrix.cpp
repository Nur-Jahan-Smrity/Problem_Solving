// adjacency matrix
#include<bits/stdc++.h>
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
ll adj_matrix[1000][1000];
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
    //cout<<"ki shomossha tomar ?????"<<endl;
    ll node ,edge,i,j;
    cout<<"Enter number of nodes and edge :"<<endl;
    cin>>node>>edge;

    ll u,v;
    ///u -> the node from which we will move ..one type of source
    ///v -> the node to which we will move .. one type of destination
   // ll adj_matrix[1000][1000]={0};
    //onek shomoy array size boro nile solve function ta te e dhuke na r ... abr onek shomoy array size limit er moddhe dileo pc te ram kom holae tokhon ow run hoy na..oi khetre online ide te check korle dekha jay j thik e run hocche ...
    ///ei khetre array ta k globally declare korle size niye problem hoy na .. plus by default zero set kora thakae ..
    //2d matrix size highest [1000][1000] dewa jabe .. er beshi jabe na ..
    //u case use memset or matrix[1000][1000]={0};
   // memset(adj_matrix, 0, sizeof(adj_matrix));
    cout<<"Enter a node and then enter the other nodes which are connected with it :"<<endl;
    for(i=0;i<edge;i++)
    {
        cin>>u>>v;
        //as they are bidirectional .. that is 1->3 , 3->1
        adj_matrix[u][v]=1;
        adj_matrix[v][u]=1;
    }
    cout<<"The required matrix is :"<<endl;
    for(i=1;i<=node;i++)
    {
        for(j=1;j<=node;j++)
        {
            cout<<adj_matrix[i][j]<<' ';
        }
        cout<<endl;
    }
    /*
    //prefix sum/cumulative sum
    long long n,i;
    cin>>n;
    ll arr[n+10]={0};
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
       // cout<<"kiree amke(test function) toh thik e execute kortese !!!"<<endl;
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   //int n = sizeof(arr) / sizeof(arr[0]);
     //test();
   solve();
}
/*
adjecency list :
1-> 2,3
2-> 1,3,4
3-> 1,2,4
4-> 2,3
adjacency matrix :
will be represented as matrix , where number of rows and column will
be equal to number of nodes .. adjacent nodes will be filled with 1 and
others node will be filled with 0 ..
*/
/*
Enter number of nodes and edge :
4 5
Enter a node and then enter the other nodes which are connected with it :
1 2
1 3
2 3
2 4
3 4
The required matrix is :
0 1 1 0
1 0 1 1
1 1 0 1
0 1 1 0
*/
