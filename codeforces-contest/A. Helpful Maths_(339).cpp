#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    vector<int> vec;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            vec.push_back(s[i]-'0');
        }
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i];
        if(vec.size()-1!=i){
            cout<<"+";
        }
    }
    cout<<endl;

    return 0;
}
