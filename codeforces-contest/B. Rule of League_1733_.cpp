//B. Rule of League_1733_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{

    ll i,j,n,x,y,count=0,zero=0;
    cin>>n>>x>>y;
    ll temp=n-1;


    if(x==0 && y==0)
        cout<<"-1"<<endl;
    else if(x==0 || y==0)
    {
        ll p=x+y,k=1;

        if(temp%p==0)
        {
            for(i=2; i<=n; i+=p)
            {
                for(int jj=0; jj<p; jj++)
                {
                    cout<<i<<" ";
                }
            }

            cout<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    else
        cout<<"-1"<<endl;
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
    test();
    //solve();
}
/*
8 1 2
1  2  3  4  5  6   7  8
1  1  4  4  6  6   8


5 2 0
1  2  3  4  5
1  1  4  4
*/
