#include<iostream>
using namespace std;
int main()
{
   int n,i,j,a[1000],s=0,d=0,c=0;
   cin>>n;
   for(i=0;i<n;i++)
   {
     cin>>a[i];
   }

   for(i=0,j=n-1;  ;)
   {

      if(c%2==0)
      {
          if(a[i]>a[j])
          {
             
             s+=a[i];
             i++;
          }
          else 
          {
             s+=a[j];
             j--;
          }
      }
      else if(c%2!=0)
      {
          if(a[i]>a[j])
          {
            
             d+=a[i];
             i++;
          }
          else 
          {
             d+=a[j];
             j--;
          }
      }
      c++;
      if(c==n )
        
        break;
   }
    cout<<s<<" "<<d<<endl;
    return 0;
}
