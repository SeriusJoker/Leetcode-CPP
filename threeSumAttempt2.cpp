#include <iostream>
#include <algorithm>
#include <vector>


class Solution{
public:
	std::vector<std::vector<int>> threeSum(std::vector<int>& nums){
		std::vector<std::vector<int>> returnNums;
		auto i = nums.begin();
		auto left = i+1;  
		auto right = nums.end()-1; 
		int sum;
		std::sort(nums.begin(), nums.end());

		while(i != nums.end()-2){
			if(i != nums.begin() && *i == *(i-1)){
				i++;
				continue;
			}
			
			auto left = i + 1;
			auto right = nums.end()-1;	

			while(left < right){

				sum = *i + *left + *right;
				std::cout << "Sum: " << sum << " " << *i << " " << *left << " " << *right << "\n";
				if(sum == 0){
					std::vector<int> insert = {*i, *left, *right};
					returnNums.push_back(insert);
					right--;
					left++;	
					while(left < right && *left == *(left-1)){
						left++;
					}
					while(left < right && *right == *(right+1)){
						right--;
					}
				} else if (sum > 0){
					right--;
				} else if (sum < 0){
					left++;	
				}
			}

			i++;
		}


		
		return returnNums;	
	}

};


int main(){
	
	std::vector<int> nums1 = {-1,0,1,2,-1,-4};

	Solution mySol;
	std::vector<std::vector<int>> sol1 = mySol.threeSum(nums1);

	for(std::vector<int> vec : sol1){
		std::cout << "[";
		for(int number : vec){
			std::cout << number << " ";
		}
		std::cout << "] ";
	}
	std::cout << "\n";

	return 0;
}
