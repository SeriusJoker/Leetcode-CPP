#include <algorithm>
#include <iostream>
#include <vector>


class Solution{
public:
	std::vector<std::vector<int>> threeSum(std::vector<int>& nums){
		std::vector<std::vector<int>> returnNums;
		int i = 0;
		int j = 1;
		int k = 2;
		int sum;

		std::sort(nums.begin(), nums.end());

		while(i < (int)nums.size()-2){
			if(k == (int)nums.size()){
				i++;
				j = i + 1;
				k = i + 2;
			}

			sum = nums[i] + nums[j] + nums[k];
	
			if(nums[i] > 0){
				break;
			}
			std::cout << nums[i] << " " << nums[j] << " " << nums[k] << "\n";
			std::cout << "Sum: " << sum << "\n";
			
			if(sum == 0){
				std::vector<int> currentPush = {nums[i], nums[j], nums[k]};
				returnNums.push_back(currentPush);
				j++;
				k++; //There might be another occurence of sum==0
			} else if(sum > 0){
				i++; //No need to keep looping on i. It will only get bigger from here
				j++;
				k++;
			} else if(sum < 0 && nums[j] < 0) {
				k++;
			} else {
				j++;
				k++;	
			}

		}

		return returnNums;	
	}

};


int main(){
	
	std::vector<int> nums1 = {1,0,1,2,-1,-4};

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
