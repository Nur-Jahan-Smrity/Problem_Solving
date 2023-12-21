#include<bits/stdc++.h>
using namespace std;
void solve()
{

   long long a,b,c,xx=0,yy=0,zz=0;
   cin>>a>>b>>c;
   zz=c;
   yy=zz+b;
   xx=yy+a;
   cout<<xx<<" "<<yy<<" "<<zz<<endl;

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
