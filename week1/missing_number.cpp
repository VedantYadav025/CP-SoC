#include <iostream>
#include <algorithm>
#include <vector>
#include <stdbool.h>

using namespace std;

int main(){
    long long int n, sum = 0, ele;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> ele;
        sum += ele;
    }
    cout << n * (n + 1) / 2 - sum<<endl;
    return 0;
}
