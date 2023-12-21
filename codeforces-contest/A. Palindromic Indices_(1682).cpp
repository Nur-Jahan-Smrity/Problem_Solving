#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long n,p=0,countt=0,i;
    cin>>n;
    string s;
    cin>>s;
    p=n/2;
    for(i=p+1;i<n;i++)
    {
        if(s[i]==s[p])
        {
            countt++;
        }
        else
            break;
    }
    if(n%2==0)
        cout<<(countt*2)+2<<endl;
    else
        cout<<(countt*2)+1<<endl;
}
void test()
{
    long long t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();
    //solve();
}
