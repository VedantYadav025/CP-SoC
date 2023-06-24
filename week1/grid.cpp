#include <iostream>

int main(){
    int t; std::cin >> t;
    while(t--){
        int n; std::cin >> n;
        int nums[n];
        int first_row[n];
        int second_row[n];
        for(int i=0; i<2*n; i++){
            nums[i] = i+1;
        }

        for(int i=0; i<n; i++){
            if(i%2==0){
                first_row[i] = nums[3*(n/2) + i/2 - 1];
            }
            else{
                first_row[i] = nums[i/2];
            }
        }

        for(int j=0; j<n; j++){
            if (j==n-1){
                second_row[j] = nums[2*n - 1];
            }
            else{
                second_row[j] = nums[n/2 + j];
            }
        }

        for(int i=0; i<n; i++){
            std::cout << first_row[i] << " ";
        }
        std::cout << "\n";
        for(int j=0; j<n; j++){
            std::cout << second_row[j] << " ";
        }
		std::cout << "\n";
    }
}
