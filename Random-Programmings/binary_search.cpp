//binary search is always done in sorted array ..
//this code is implemented for array where there is no repeated digit..
#include<bits/stdc++.h>
  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
ll arr[100005];
void printArr(int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i] << ' ';
    }
    cout<< endl;
}
void binary_search(ll n,ll k)
{
    ll b=0,e=n-1,mid=0,cc=0;
    while(b<=e)
    {
       // printf("CH\n");
        mid= b + (e - b) / 2;
        if(k==arr[mid])
        {
            //return m;
            cout<<"found"<<endl;
            cc=1;
            break;
        }
        else if(k>arr[mid])
            b=mid+1;
        else
            e=mid-1;
    }
    if(cc==0)
    {
        cout<<"not found"<<endl;
    }
//memset(arr,0,sizeof(arr));
}
void solve()
{
    long long n,k,i,j,countt=0;
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    printArr(n);
    binary_search(n,k);
   /* if(countt)
    {
        cout<<"found"<<endl;
    }
    else
        cout<<"not found"<<endl;*/

}

void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        memset(arr,0,sizeof(arr));
        solve();

    }

}
/*
Bitwise Operators in C/C++
  & (bitwise AND)
  | (bitwise OR)
  ^ (bitwise XOR)
  << (left shift)
  >> (right shift)
  ~ (bitwise NOT)
*/
int main()
{


    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
5
8 9
5 9 7 6 3 2 -5 8
-5 2 3 5 6 7 8 9
found
6 6
3 5 2 5 1 8
1 2 3 5 5 8
not found
3 4
2 4 6
2 4 6
found
5 5
1 4 2 3 6
1 2 3 4 6
not found
6 8
1 8 2 5 7 2
1 2 2 5 7 8
found
*/
