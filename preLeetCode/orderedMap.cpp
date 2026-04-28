#include <iostream>
#include <string>
#include <vector>
#include <map>

int main(){
	
	std::map<int,int> numMap;
	numMap[3] = 30;
	numMap[1] = 10;
	numMap[2] = 20;

	for(const auto& [key,value] : numMap){
		std::cout << "[" << key << "] " << value << "\n";	
	}

	std::map<std::string, int> mp;
	mp["banana"] = 5;
	mp["apple"] = 2;

	if(mp.find("apple") != mp.end()){
		std::cout << mp["apple"] << "\n";
	}
	if(mp.find("pear") != mp.end()){
		std::cout << mp["pear"] << "\n";
	}

	std::string s = "mississippi";
	std::map<char,int> letterCounter;
	for(size_t i = 0; i < s.size(); i++){
		letterCounter[s[i]] +=1;	
	}

	for(const auto& [key,value] : letterCounter){
		std::cout << "[" << key << "] " << value << "\n";	
	}

	std::vector<int> numbers = {4, 1, 2, 4, 1, 3};
	std::map<int,int> numberCounter;
	for(int i = 0; i < numbers.size(); i++){
		numberCounter[numbers[i]] +=1;	
	}
	
	for(const auto& [key, value] : numberCounter){
		std::cout << "[" << key << "] " << value << "\n";
	}

	return 0;
}

