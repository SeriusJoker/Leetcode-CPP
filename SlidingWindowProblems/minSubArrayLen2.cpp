#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <climits>

class Solution{
public:
	int minSubArrayLen(int target, std::vector<int>& nums){
		int bestMin = INT_MAX; 
		std::deque<int> window;
		int windowSize = 0;
		int count = 0;
	
		for(int i = 0; i < (int)nums.size(); ++i){
			//std::cout << "Window Size " << windowSize << "\t";
			//std::cout << "Count " << count << "\n";	
			window.push_back(nums[i]);
			count+= nums[i];
			while(count >= target){
				
				bestMin = std::min(bestMin, (int)window.size());

				count-=window.front();
				window.pop_front();
			//std::cout << "Window Size (i) " << windowSize << "\t";
			//std::cout << "Count (i)" << count << "\n";	


			}

			
		
		}
		if(bestMin == INT_MAX){
			return 0;	
		} else {
			return bestMin;
		}
		
	}

};


int main(){

	Solution mySol;
	std::vector<int> nums1 = {1,4,4};
	int bestSub = mySol.minSubArrayLen(4, nums1);
	std::cout << bestSub;



}
