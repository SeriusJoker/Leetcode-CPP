#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <set>
#include <string>

std::vector<int> twoSumIndicies(const std::vector<int>& nums, int target){
	
	std::unordered_map<int, int> mp;
	int desired;
	std::vector<int>twoSumReturn = {-1,-1};


	for(int i = 0; i < nums.size(); i++){
		desired = target - nums[i];
		auto it = mp.find(desired);
		if(it == mp.end()){ //Didnt find it
			mp[nums[i]]=i; //Didnt specifically ask for first time the number occurs. So this works
		} else {
			twoSumReturn[0] = it->second;
			twoSumReturn[1] = i;
			break;
		}
	}

	return twoSumReturn;

}


int firstRepeat(const std::vector<int>& nums){
	
	std::unordered_set<int> s;
	

	for(int num : nums){
		if(s.find(num) == s.end()){
			s.insert(num);
		} else {
			return num;
		}
	}
	return -1;

}

int nextGreater(const std::set<int>& s, int x){
	
	auto it = s.upper_bound(x);

	if(it != s.end()){
		return *it;
	} else {
		return -1;
	}
}


void addIfExists(std::unordered_map<std::string,int>& mp, const std::string& name, int delta){
	
	auto it = mp.find(name);

	if(it != mp.end()){
		it->second += delta;
	}	



}


int main(){

	std::set<int> theSet = {1,2,5,8,9,9,8,7};
	std::cout << nextGreater(theSet, 7) << "\n";

	std::unordered_map<std::string, int> mp;
	mp["Alex"] = 0;
	mp["Ben"] = 0;

	addIfExists(mp, "Alex", 3);
	std::cout << mp["Alex"] << "\n";

	std::vector<int> testNums = {1,3,2,5,3,1};
	std::cout << firstRepeat(testNums) << "\n";

	std::vector<int> twoSum = twoSumIndicies(testNums, 8);
	std::cout << twoSum[0] << " " << twoSum[1] << "\n";

	

	return 0;
}
