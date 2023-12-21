//B. Mocha and Red and Blue_738_.cpp

#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    vector < ll > v;
      ll n,i,sz,j,p1,p2,x,y;
      string s;
      cin>>n>>s;
      for(i=0;i<n;i++)
      {
        if(s[i]!='?') v.push_back(i);
      }
      //cout<<v.size()<<endl;
      if(v.size()==0)
      {
        for(i=0;i<n;i++)
        {
          if(i%2==0) s[i]='B';
          else s[i]='R';
        }
      }
      else {
      for(j=v[0];j>=0;j--)
      {
        if(s[j]=='B' and s[j-1]=='?') s[j-1]='R';
        else if(s[j]=='R' and s[j-1]=='?') s[j-1]='B';
      }
      for(j=v[v.size()-1];j<n;j++)
      {
        if(s[j]=='B' and s[j+1]=='?') s[j+1]='R';
        else if(s[j]=='R' and s[j+1]=='?') s[j+1]='B';
      }

      for(i=0;i<v.size()-1;i++)
      {
        p1=v[i];
        p2=v[i+1];
        ///cout<<p1<<" "<<p2<<endl;
        if(p2-p1==1) continue;
        else {
             if((p2-p1-1)%2==0) { x=(p2-p1-1)/2; y=x; }
             else { x=(p2-p1-1)/2+1; y=(p2-p1-1)/2; }
             //cout<<x<<" "<< y<<endl;
             while(x--)
             {
               if(s[p1]=='B' and s[p1+1]=='?') s[p1+1] = 'R';
               else if(s[p1]=='R' and s[p1+1]=='?') s[p1+1] = 'B';
               p1++;
             }
             while(y--)
             {
               if(s[p2]=='B' and s[p2-1]=='?') s[p2-1] = 'R';
               else if(s[p2]=='R' and s[p2-1]=='?') s[p2-1] = 'B';
               p2--;
             }
        }
      }
    }
    cout<<s<<endl;
    /*long long n,i,j,count=0;
    cin>>n;
    string s;
    cin>>s;
    map<char , char > mp;
    mp['R']='B';
    mp['B']='R';
    string s1="";
    char first='z';
    for(i=0; i<n; i++)
    {
      while(i<n && s[i]=='?')
        i++;
      if(i==n)
        break;
      if(i-s1.size()%2)
      {
          char c =s[i];
          for(j=s1.size();j<=i;j++)
          {
              s1+=mp[c];
              c =mp[c];
          }
      }
      else
      {
          char d =mp[s[i]];
          for(j=s1.size();j<=i;j++)
          {
              s1+=mp[d];
              d =mp[d];
          }
      }
    }
    if(s1.size()==0)
    {
        char m='B';
        for(i=0; i<n; i++)
         {
            s1+=m;
            m=mp[m];
         }
    }
    while(s1.size()<n)
    {
        ll mm=s1.size();
        s1+=mp[s1[mm-1]];
    }
    cout<<s1<<endl;*/
}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //j++;
        solve();
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*

*/
