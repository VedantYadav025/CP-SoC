#include <iostream>
using namespace std;

int main(){
    
    int t; cin>>t;
    while(t--){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int m = (y2-y1)-(x2-x1);
        int n = y2-y1;
        if (m<0 || n<0){
            cout<<-1<<endl;
        }
        else{
            cout<<m+n<<endl;
        }
    }
    return 0;
}