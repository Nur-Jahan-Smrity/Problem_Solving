#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    //int n;
    long long i,a=0,d=0;
    string s;
    //cin>>n;
    cin>>s;
    //s[n]='p';
    for(i=0;i<s.size();i++)
    {
       if(s[i]>='A' && s[i]<='Z')
          a++;
       else
          d++;
    }
    if(a>d)
    {
       transform(s.begin(),s.end(),s.begin(),::toupper);
       cout<<s<<endl;
    }
    else 
    {
       transform(s.begin(),s.end(),s.begin(),::tolower);
       cout<<s<<endl;
    }
    return 0;
}


///another  way ....
/*
#include<iostream>
#include<cstring>
#include<cctype>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,i;
    string s;
    getline(cin,s);   
    
    //cout<<s1<<s2;
    //strlen is for character array..we can't use strlen for string
    a=s.size();
    for(i=0;i<a;i++)
    {
        if(s[i]>='a' && s[i]<='z')
           b++;
        if(s[i]>='A' && s[i]<='Z')
           c++;
    }
    
    if(b>=c)
    {
       for(i=0;i<a;i++)
       {
         s[i]=tolower(s[i]);
       }
       cout<<s<<endl;
    }
    else
    {
       for(i=0;i<a;i++)
       {
         s[i]=toupper(s[i]);
       }
       cout<<s<<endl;
    }
    return 0;
}
*/
