#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>


int main(){
	
	std::unordered_map<std::string, int> mp;

	mp["cat"] = 2;
	mp["dog"] = 5;
	mp["apple"] = 3;

	auto iterator = mp.find("cat");

	if(iterator != mp.end()){
		std::cout << iterator->first << " " << iterator->second << "\n";
	} else{
		std::cout << "doesn't exist" << "\n";
	}
	
	iterator = mp.find("apple");
	if(iterator != mp.end()){
		std::cout << "[" << iterator->first << "] " << iterator->second << "\n";
		iterator->second += 5;
		std::cout << "[" << iterator->first << "] " << iterator->second << "\n";


	}

	std::vector<int> nums = {1,2,3,4,5,1,2,6,7,8,9};
	std::unordered_map<int,int> seen;
	for(size_t i = 0; i < nums.size() ; i++){
		auto it = seen.find(nums[i]);
		if(it == seen.end()){
			seen[nums[i]] = 1;
		} else {
			std::cout << "Duplicate Found: " << nums[i] << "\n";
			break;
		}
	}

	return 0;
}
