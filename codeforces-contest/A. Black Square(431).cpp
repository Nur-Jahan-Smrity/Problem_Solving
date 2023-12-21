#include<iostream>
#include<cstring>
#include<cctype>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,p=0,sum=0;
    string s;
    cin>>a>>b>>c>>d;
    cin>>s;
    p=s.size();
    for(i=0;i<p;i++)
    {
       if(s[i]=='1')
          sum+=a;
       if(s[i]=='2')
          sum+=b;
       if(s[i]=='3')
          sum+=c;
       if(s[i]=='4')
          sum+=d;
    }
    cout<<sum<<endl;
    return 0;
}
