#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

int findRepeatedNumber(std::vector<int> nums){


	std::unordered_map<int,int> seen;
	
	for(size_t i = 0; i < nums.size()){
		if(seen.find(nums[i]) != seen.end()){
			return nums[i];
		} else {
			seen[i]++;
		} 
	}

}


int main(){

	std::string banana = "banana";
	std::unordered_map<char, int> letterCounter;

	for(char letter : banana){
		letterCounter[letter] +=1;	
	}

	for(std::pair Letterpair : letterCounter){
		std::cout << "[" << (char)Letterpair.first << "]" << " " << Letterpair.second << "\n";
	}

	std::cout << "\n";
	//Keys are immutable in a pair object type
	for(const std::pair<const char, int>& pair : letterCounter){
		std::cout << "[" << pair.first << "] " << pair.second << "\n";
	} 


	std::unordered_map<std::string, int> names;
	names["bob"] = 3;
	std::string theName = "bob";
	if(names.find(theName) == names.end()){
		std::cout << theName << " doesnt exist" << "\n";
	} else {
		std::cout << theName << " does exist" << "\n";
	}

	std::unordered_map<int, int> testMap;
	testMap[10] = 1;
	testMap[20] = 2;

	if(testMap.count(10)){
		std::cout << "10 in map: " << testMap.count(10) << "\n";

	}

	if(testMap.count(20)){
		std::cout << "20 in map: " << testMap.count(20) << "\n";
	}
	std::vector<int> coolNumbers = {1,2,3,4,3,5,4};
	std::cout << findRepeatedNumber(coolNumbers) << "\n";


	return 0;
}
