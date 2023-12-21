//C. Word on the Paper_886_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,k,count=0;
   // cin>>n;
   // ll a[n+10]={0};
    //ll x = INT_MAX, y = INT_MAX, z = INT_MAX;
    string s[8],s1="";
    //s is two dimentional...
    //cin>>s;
    for(i=0; i<8; i++)
    {
        cin>>s[i];
    }
    for(i=0; i<8; i++)
    {
       for(j=0; j<8; j++)
       {
           if(s[i][j]!='.')
           {
               k=i;
               while(k<8 && s[k][j])
               {
                   if(s[k][j]!='.')
                    s1.push_back(s[k][j]);
                   k++;
               }
               k=0;
               break;
           }
       }
       //empty = 1    not empty = 0   ...
       if(!s1.empty())//ans paile break;
         break;
    }
    cout<<s1<<endl;
   // cout<<endl;

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
