#include <iostream>
using namespace std;

typedef int64_t ll;
bool denomination_possible(ll n, ll k);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    int t; cin>>t;
    for (int i=0;i<t;i++){
        ll n,k;
        cin>>n>>k;        
        if (denomination_possible(n,k)==true){cout<<"yes\n";}
        else {cout<<"no\n";}
    }
    return 0;
}

bool denomination_possible(ll n, ll k){
    if (n%2==0 & k%2==0){
        return true;
    }
    else if(n%2==0 && k%2==1){
        return true;
    }
    else if(n%2==1 && k%2==0){
        return false;
    }
    else if(n%2==1 && k%2==1){
        return true;
    }
}

