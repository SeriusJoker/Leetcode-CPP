#include <iostream>
#include <vector>
#include <string>


std::pair<int,int> minMax(const std::vector<int>& nums){
	
	std::pair<int,int> returnPair;

	for(int val : nums){
		if(val > returnPair.first){
			returnPair.first = val;
		}
		if(val < returnPair.second){
			returnPair.second = val;
		}
	}

	return returnPair;

}

std::pair<int,int> firstMaxWithIndex(const std::vector<int>& nums){
		
	std::pair<int,int> returnPair;

	for(size_t i = 0; i < nums.size() ; ++i){
		
		if(nums[i] > returnPair.first){
			returnPair.first = nums[i];
			returnPair.second = i;
		}

	}
	return returnPair;

}

std::pair<int,int> countVowelsAndConsonants(const std::string& s){

	std::pair<int,int> returnPair = {0,0};

	for(char c : s){
	
		//Ignore numbers and punctuation
		if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
		
			if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
				returnPair.first++; 
			} else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
				returnPair.first++;
			} else {
				returnPair.second++;
			}
		
		}
	
	}
	return returnPair;
}


int main(){

	std::vector<int> nums = {1,2,3,4,5,6,7,8,9,9,9,-1};
		
	std::pair<int,int> pair1 = minMax(nums);
	std::cout << "First: " << pair1.first << "\tSecond: " << pair1.second << "\n";

	std::pair<int,int> pair2 = firstMaxWithIndex(nums);
	std::cout << "First: " << pair2.first << "\tSecond: " << pair2.second << "\n";

	std::string blackJack = "BlackJack123";
	std::pair<int,int> pair3 = countVowelsAndConsonants(blackJack);
	std::cout << "First: " << pair3.first << "\tSecond: " << pair3.second << "\n";


	return 0;
}
