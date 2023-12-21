#include <iostream>
using  namespace::std;
 
int main(){
    string s = "12345";
    int x = 12344;
    int res = 0;
    for(int i = 0; i < s.size(); i++){
        res = res * 10 + s[i] - 48;
        res %= x;
    }
 
    if(!res){
        cout<<"Divisable"<< endl;
    }
    else{
        cout<<"Not"<< endl;
    }
 
}
 
// UVA you can say 11
// UVA multiple of 17
// Light OJ Large Division
