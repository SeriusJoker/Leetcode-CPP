#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>


void printVector(const std::vector<int>& v) {
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        std::cout << *it << "\n";
    }
}

void printMap(const std::unordered_map<std::string, int>& mp){

	for(auto& pair : mp){
		std::cout << pair.first << " " << pair.second << "\n";
	}

}

bool contains(const std::vector<int>& v, int target){
	
	for(auto& value : v){
		if(value == target){
			return true;
		}
	}
	return false;
}

void incrementAll(std::vector<int>& v, int delta){

	for(auto it = v.begin(); it != v.end(); ++it){
		
		*it += delta;
		
	}

}



int main(){
	std::unordered_map<std::string, int> mp;
	mp["Banana"] = 3;
	mp["Apple"] = 5;
	printMap(mp);

	std::vector<int> nums = {1,2,3,4,5,6};
	std::cout << std::boolalpha << contains(nums, 5) << "\n";
	std::cout << std::boolalpha << contains(nums, 9) << "\n";

	printVector(nums);
	incrementAll(nums, 5);
	printVector(nums);




}
