#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>


std::vector<int> prefixSum(const std::vector<int>& nums){

	int sum = 0;
	std::vector<int> returnVector;
	
	for(int val : nums){
		sum+=val;
		returnVector.push_back(sum);
	}	

	return returnVector;

}

int calcSum(const std::vector<int>& nums){
	int returnNum = 0;

	for(int val : nums){
		returnNum+=val;
	}



	return returnNum;

}


// This is correct enough. Your question was weird. I think I got the point. 
std::vector<int> leftRightDifference(std::vector<int>& nums){

	std::vector<int> returnVector;
	int leftSum = 0;
	int rightSum = calcSum(nums)-nums[0];:
	returnVector.push_back(std::abs(leftSum-rightSum));

	for(int i = 0; i < nums.size(); ++i){
		leftSum+=nums[i];
		rightSum-=nums[i];
		returnVector.push_back(std::abs(leftSum-rightSum));

	}
	return returnVector;
}


int main(){
	
	std::vector<int> nums = {1,2,3,4,5};
	std::vector<int> prefixSumVector = prefixSum(nums);

	for(int val : prefixSumVector){
		std::cout << val << " ";
	}	
	std::cout << "\n";


	std::vector<int> LRnums = {10,4,8,3};
	std::vector<int> leftRightDiff = leftRightDifference(LRnums);

	for(int number : leftRightDiff){
		std::cout << number << " ";
	}
	std::cout << "\n";
	

	return 0;
}
