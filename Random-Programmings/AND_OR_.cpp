#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    int i,j,n,m;
    cin>>n>>m;
    //AND korle j value ta pabo oita always 2 ta number er moddhe minimum number ta hobe othoba  tar thekeo choto hobe ..
    // OR korle j value ta pabo oita always 2 ta number er moddhe maximum number ta hobe othoba tar thekeo boro hobe ..
    cout<<"and = "<<(n&m)<<endl;
    cout<<"or = "<<(n|m)<<endl;
    if((n&1)==1)
        cout<<n<<" is even"<<endl;
    else
        cout<<n<<" is odd"<<endl;
    /*
    for(int i=0; i<s.length();i++)
    {
       char b=s[i];
    }*/

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
2
3 5
and = 1
or = 7
3 is even
2 3
and = 2
or = 3
2 is odd
*/
