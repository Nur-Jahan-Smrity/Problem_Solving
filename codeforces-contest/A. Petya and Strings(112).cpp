#include<iostream>
#include<cstring>
#include<cctype>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,i;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    
   // cout<<s1<<s2;
   //strlen is for character array..we can't use strlen for string
    a=s1.size();
    for(i=0;i<a;i++)
    {
       s1[i]=toupper(s1[i]);
       s2[i]=toupper(s2[i]);
       if(s1[i]<s2[i])
       {
         cout<<"-1"<<endl;
         b=1;
         break;
       }
       if(s1[i]>s2[i])
       {
         cout<<"1"<<endl;
         b=1;
         break;
       }
    }
    if(b==0)
      cout<<"0"<<endl;
    return 0;
}
