#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>



char firstDuplicateChar(const std::string& s){
	std::unordered_set<char> charList;
	for(size_t i = 0; i < s.size(); i++){
		if(charList.count(s[i])){
			return s[i];
		} else {
			charList.insert(s[i]);
		}
	}
	return 'z';
}

int main(){
	
	std::unordered_set<int> theSet;
	theSet.insert(5);
	theSet.insert(10);
	theSet.insert(15);

	if(theSet.count(5)){
		std::cout << "5 Exists" << "\n";
	}

	if(theSet.count(20)){
		std::cout << "20 exists" << "\n";
	} else {
		std::cout << "20 does not exist" << "\n";
	}

	std::vector<int> nums = {1,2,2,2,3,3,3};
	std::unordered_set<int> numSet;
	for(int num : nums){
		if(!numSet.count(num)){
			numSet.insert(num);
			std::cout << num << "\n";
		} 
	}
	
	std::unordered_set<char> letters = {'a','b','c'};
	letters.erase('b');
	if(letters.count('b')){
		std::cout << "B exists" << "\n";
	} 
	if(letters.count('a')){
		std::cout << "A exists" << "\n";
	}

	std::string word = "banana";
	std::cout << firstDuplicateChar(word) << "\n";


	return 0;

}
