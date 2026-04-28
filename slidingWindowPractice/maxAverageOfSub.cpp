#include <deque>
#include <vector>
#include <iostream>
#include <algorithm>

float maxAverageSubarray(std::vector<int> nums, int k){

	std::deque<int> window;
	float average;
	int count;
	int maxCount = nums[0];
		
	for(int i = 0; i < (int)nums.size(); ++i){
		if(window.size() == k){
			count -= window.front();
			count += nums[i];
			window.push_back(nums[i]);
			window.pop_front();
			maxCount = std::max(maxCount, count);
		} else {
			count += nums[i];
			window.push_back(nums[i]);

		}
		maxCount = std::max(maxCount, count);
		//std::cout << "Max: " << maxCount << "\n";

	
	}

	float maxAverage = (maxCount/(float)k);
	return maxAverage; 
}


int main(){
	std::vector<int> nums1 = {1,12,-5,-6,50,3};
	float solution1 = maxAverageSubarray(nums1, 4);
	std::cout << "Solution1: " << solution1 << "\n";
	
	return 0;

}
