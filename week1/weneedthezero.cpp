#include <iostream>
#include <vector>

int main(){
  int t; std::cin >> t;
  while(t--){
    int n; std::cin >> n;
    std::vector<int> nums(n);
    int bitwise_xor = 0;
    for(int i=0; i<n; i++){
      std::cin >> nums[i];
      bitwise_xor = bitwise_xor ^ nums[i];
    }
    if (n%2 == 0){
      if (bitwise_xor == 0){
	std::cout << 1 << std::endl;;
      }
      else{
	std::cout << -1 << std::endl;;
      }
    }
    else{
      std::cout << bitwise_xor << std::endl;
    }
  }
  return 0;
}
