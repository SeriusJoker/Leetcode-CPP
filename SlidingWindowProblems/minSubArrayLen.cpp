#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

class Solution{
public:
	int minSubArrayLen(int target, std::vector<int>& nums){
		int bestMin = (int)nums.size();
		std::deque<int> window;
		int windowSize = 0;
		int count = 0;
		
		for(int i = 0; i < nums.size(); ++i){
			
			if(count < target){
				count+=nums[i];
				window.push_back(nums[i]);
				windowSize++;
			} else {
				count-=window.front();
				window.pop_front();
				windowSize--;
			}
			
			bestMin = std::min(windowSize, bestMin);
			std::cout << "Best Min: " << bestMin << "\n";

		}	
		return bestMin;
	}

};


int main(){

	Solution mySol;
	std::vector<int> nums1 = {2,3,1,2,4,3};
	int bestSub = mySol.minSubArrayLen(7, nums1);
	std::cout << bestSub;



}
