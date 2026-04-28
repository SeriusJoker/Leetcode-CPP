#include <iostream>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>
#include <string>
#include <vector>


//Counting how many time a word appears when order doesnt matter is an unordered_map
//Maintain usersnames in alphabetical order and check if username exists: set
//given numbers arriviing in a stream, detect duplicates as fast as possible: unordered_set

int main(){
	

	std::vector<int> unsortedInts = {4,2,2,9,1,4};
	std::set<int> uniqueNumsSorted;

	for(int num : unsortedInts){
		uniqueNumsSorted.insert(num);	
		std::cout << num << "\n";
	}

	std::cout << "\n";

	for(int num : uniqueNumsSorted){
		std::cout << num << "\n";
	}

	int target = 9;
	std::unordered_set<int> uniqueNumsUnsorted; // We dont care about counting how many times target is hit
	for(int num : unsortedInts){
		uniqueNumsUnsorted.insert(num);
	}
	if(uniqueNumsUnsorted.count(target)){
		std::cout << target << " exists" << "\n";		
	} else {
		std::cout << target << " does not exist" << "\n";
	}

	std::set<int>numbers = {2,7,3,9,4};
	std::vector<int>queries = {1,3,8,9};
	std::vector<int>results = {-1,-1,-1,-1};

	for(size_t i = 0; i < queries.size() ; i++){
		for(int num : numbers){
			if(num > queries[i]){
				std::cout << num << " is greater than " << queries[i] << "\n";
				results[i] = num;	
				break;
			}

		}
	}

	for(size_t i = 0; i < results.size(); i++){
		std::cout << results[i] << " ";		
	}
		std::cout << "\n";	


	return 0;
}
