//Index_of_each_character
#include<bits/stdc++.h>
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define pi (3.141592653589)
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    long long n,i,j,count=0,a,b,c,even=0,odd=0;
    cin>>n;
    ll ar[n+10]= {0};
    string s;
    cin>>s;
    vector<int>G[1000];
    map<char,int>mp;
    for(i=0; i<n; i++)
    {
        ll store = s[i];
        mp[s[i]]++;
        // cout<<store<<",,,"<<endl;
        G[store].push_back(i);

    }


    for(auto k:mp)
    {
        cout<< k.first << " -> ";
        for(j=0; j<G[int(k.first)].size(); j++)
        {

            cout<<G[int(k.first)][j];
            if(j<G[int(k.first)].size()-1)
                cout<<" , ";


        }

        cout<<endl;

//G[s[i]+97]
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
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
8
7
abacaba
a -> 0 , 2 , 4 , 6
b -> 1 , 5
c -> 3
2
aa
a -> 0 , 1
1
y
y -> 0
4
bkpt
b -> 0
k -> 1
p -> 2
t -> 3
6
ninfia
a -> 5
f -> 3
i -> 1 , 4
n -> 0 , 2
6
banana
a -> 1 , 3 , 5
b -> 0
n -> 2 , 4
10
codeforces
c -> 0 , 7
d -> 2
e -> 3 , 8
f -> 4
o -> 1 , 5
r -> 6
s -> 9
8
testcase
a -> 5
c -> 4
e -> 1 , 7
s -> 2 , 6
t -> 0 , 3
*/
