#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
 long long n,m,i,j,k=0,temp=0;
 cin>>n>>m;
 cin.ignore();
 string s;
 cin>>s;
 queue<char>qe;

 while(m--)
 {
     for(i=1;i<n;i++)
     {
         if(s[i-1]=='B' && s[i]=='G')
         {
             s[i-1]='G';
             
             s[i]='B';
             
             i++;
         }
     }
 }
     cout<<s;
     cout<<endl;
}
/*void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}*/
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // test();
    solve();
}
