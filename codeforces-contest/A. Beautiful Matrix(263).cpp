#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,a[6][6],p=0,q=0;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
             p=i;
             q=j;
             
            }
        }
    }
    p=abs(p-3);
    q=abs(q-3);  
    //cout<<p<<q<<endl;
    cout<<p+q<<endl;
    return 0;
}
