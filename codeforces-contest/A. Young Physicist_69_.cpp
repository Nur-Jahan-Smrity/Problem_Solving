//A. Young Physicist
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;

void test()
{
    long long t,sumx=0,sumy=0,sumz=0;;
    cin>>t;

    while(t--)
    {
        //j++;
        //solve();
        ll i,j,x,y,z;
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
   // solve();
}
/*
3
4 1 7
-2 4 -1
1 -5 -3



3
3 -1 7
-5 2 -4
2 -1 -3

*/
