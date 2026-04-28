#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>


std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2){
	
	std::vector<int> returnVector;
	std::unordered_set<int> set1;
	std::unordered_set<int> set2;

	//Assuming vectors arent same size
	
	for(int val : nums1){
		set1.insert(val);
	}

	for(int val : nums2){
		set2.insert(val);
	}
	
	for(int value : set1){
		if(set2.count(value)){
			returnVector.push_back(value);
		}
	}

	return returnVector;

}

std::vector<int> topKFrequent(std::vector<int>& nums){

	std::unordered_map<int, int> map; //value, frequency
	
	for(int val : nums){
		map[val]++;
	}
	
	int firstF = 0;
	int secondF = 0;
	int firstV = 0;
	int secondV = 0;

	for(const auto& [value, frequency] : map){
		if(frequency > firstF){
			secondV = firstV;
			secondF = firstF;
			firstV = value;
			firstF = frequency;			
		}	
	}

	std::vector<int> returnVector = {firstV, secondV};
	return returnVector;

}

int main(){

	std::vector<int> nums1 = {1,2,2,2,3,3,4,5};
	std::vector<int> nums2 = {0,2,2,4,5,5};

	std::vector<int> section = intersection(nums1, nums2);

	for(int val : section){
		std::cout << val << " ";
	}
	std::cout << "\n";

	std::vector<int> topFreq = topKFrequent(nums1);
	for(int val : topFreq){
		std::cout << val << "\n";
	} 

}
