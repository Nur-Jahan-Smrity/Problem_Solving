//cf_B. Candies_1810_.cpp
//ei code ta te j for loop use kore vector ta print kora hoise oikhane 0 - v.size() porjonto loop chalai print korle erokom ashbe .. Idleness limit exceeded on test 2.. to avoid this use auto .......
#include<bits/stdc++.h>
#define rall(qz) qz.rbegin(),qz.rend()
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
void solve()
{
    long long n,m,i,j,count=0,one=0;
    cin>>n;
    //scanf("%lld",&n);
    //ll a[n+10]= {0};

   // map<long long, long long>mp;
    for(i=0; i<n; i++)
    {
        //scanf("%lld",&m);
        cin>>m;
        if(m%2==0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        vector<int>v;
        while(m>1)
        {
            if(((m-1)/2)%2)
            {
                m=(m-1)/2;
                v.push_back(2);
            }
            else
            {
                m=(m+1)/2;
                v.push_back(1);
            }
        }
        cout<<v.size()<<endl;
        reverse(v.begin(),v.end());

         for(auto it:v)
         {
             cout<<it<<" ";
         }

        /*for(i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }*/
        cout<<endl;
    }

}
int main()
{
    solve();
}
/*
inputCopy
4
2
3
7
17
outputCopy
-1
1
2
2
2 2
4
2 1 1 1
*/
