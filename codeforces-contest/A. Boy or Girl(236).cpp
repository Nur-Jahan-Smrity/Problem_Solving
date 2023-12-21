#include<iostream>
#include<cstring>
#include<cctype>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,i,p[26]={0};
    string s;
    getline(cin,s);   
    
    //cout<<s1<<s2;
    //strlen is for character array..we can't use strlen for string
    a=s.size();
    for(i=0;i<a;i++)
    {
        if(s[i]>='a' && s[i]<='z')
           p[s[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
      if(p[i]>0)
        b++;
    }
    if(b%2==0)
      cout<<"CHAT WITH HER!"<<endl;
    else
      cout<<"IGNORE HIM!"<<endl;
    return 0;
}
