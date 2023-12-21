#include <iostream>
using namespace std;
int main()
{
    int n,i,a[100000],p=0,c=0;   
    cin>>n; 
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    
    for(i=0;i<n;i++)
    {
       if(a[i]>0) 
            p+=a[i];
       else if(a[i]==-1)
       {
            if(p>0)
                p--;
            else
               c++;
       }  
    }   
       //
    
    cout<<c<<endl;   
    return 0;
}
