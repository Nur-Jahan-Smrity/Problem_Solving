//cf_58_A. Chat room ..
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0;
    string s="",s1="hello",s2;
    cin>>s2;

    for(i=0; i<s2.size(); i++)
    {
        if(s2[i]=='h' && s.size()==0)
        {
            s+='h';
        }
        if(s2[i]=='e' && s.size()==1)
        {
            s+='e';
        }
        if(s2[i]=='l' && (s.size()==2 || s.size()==3))
        {
            s+='l';
        }
        if(s2[i]=='o' && s.size()==4)
        {
            s+='o';
        }
    }
    if(s==s1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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
    //test();
    solve();
}
/*

*/
