//D:\all codes\A. Lucky Numbers_(861_div2).cpp
#include<bits/stdc++.h>
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    long long i,j,count=0,store=0,maxx=-1,lp=0,num1;
    string l,r;
    cin>>l>>r;

    int num2 = std::stoi(l);
    int num3 = std::stoi(r);
    vector<string>ll;
    lp=min(100,num3-num2);

    for(i=0; i<=lp; i++)
    {
      string ss=to_string(num2);
      string sss=to_string(num2);
      //cout<<ss<<endl;
        sort(ss.begin(), ss.end());
        store=int(ss[ss.size()-1])-int(ss[0]);
        if(int(store)>maxx)
        {
            maxx=int(store);

            ll.push_back(sss);
        }
        //l++;
        num2++;
    }
    cout<<ll[ll.size()-1]<<endl;
   //cout<<min(100,lp)<<endl;

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
