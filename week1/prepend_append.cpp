#include <iostream>
#include <string>
using namespace std;

int length_original(string s,int n);
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;
        getline(cin>>ws,s);
        cout<<length_original(s,n)<<"\n";
    }
    return 0;
}

int length_original(string s,int n){
    for(int i=0;i<=n/2;i++){
        if (s[i]==s[n-i-1]){
            return n-2*i; 
        }
    }
    return 0;
}
/*
    0...n-1
    s[i] == s[n-i-1] --> s[i]...s[n-i-1] is the original string 
    length = n-2i
    do this for i = 0 to  
*/
