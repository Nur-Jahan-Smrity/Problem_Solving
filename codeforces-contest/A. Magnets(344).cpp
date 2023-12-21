#include<iostream>
#include<cstring>
#include<cctype>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=1,i;
    string s;
    char c[100];
    cin>>n;
   
    getline(cin,s);
    while(n--)
    {      
        char(c)=char(s[1]);
        getline(cin,s);
        if(c==s[0])
           a++;      
    }
    cout<<a<<endl;
    return 0;
}
