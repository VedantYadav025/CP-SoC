#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int n_bits=0;
        for(int i=1; i<=n; i++){
            int j=i;
            while(j>0){
                if(j%2==1){
                    n_bits++;
                }
                j = j/2;
            }
        }
        cout<<n_bits<<"\n";
    }
}