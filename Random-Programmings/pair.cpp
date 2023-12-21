#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    ll i,j,n,m;
    cin>>m;
    pair<int,int>pp[1000];
    for(i=0;i<m;i++)
    {
        cin>>pp[i].first>>pp[i].second;
    }

   for(i=0;i<m;i++)
    {
        cout<<pp[i].first<<" "<<pp[i].second<<endl;
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
        //cin.ignore();

    }

}

int main()
{


    //int n = sizeof(arr) / sizeof(arr[0]);
    //test();
    solve();
}
/*

*/
