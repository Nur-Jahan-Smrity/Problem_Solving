#include<iostream>

using namespace std;
int main()
{
    char s;
    long long t,n,m,c=0;
    cin>>t>>n;
    while(t--)
    {
        cin>>s;
        cin>>m;
        if(s=='+')
        {
            n+=m;
        }
        if(s=='-')
        {
         if(n>=m)
            n-=m;
         else
           c++;
        }      
    }

    cout <<n<<"  "<<c<<endl;
    return 0;
}
