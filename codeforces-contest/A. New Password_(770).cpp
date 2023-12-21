#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int n,k,i=0;
    
    cin>>n>>k;
    int j;

    char ch;
    ch='a';
    
    for(j=1; j<=n; j++)
    {
       if(i==k)
         i=0;
       cout<<char(ch+i);
       i++;
       
    }
    cout<<endl;
    return 0;
}
//another way 
/*
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int n,k,i=0;
    
    cin>>n>>k;
    int j;

    char ch;
    ch='a';
    for(j=1; j<=n; j++)
    {
       if(i==k)
         i=0;
       cout<<char(ch+i);
       i++;
       
    }
    cout<<endl;
    return 0;
}


*/
