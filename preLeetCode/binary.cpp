#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool exists(const std::vector<int>& v, int target){
	return std::binary_search(v.begin(), v.end(), target);
}

int firstIndex(const std::vector<int>& v, int target){
	
	auto it = std::lower_bound(v.begin(), v.end(), target);
	return it - v.begin(); 

}

int countOccurrences(const std::vector<int>& v, int target){

	auto first = std::lower_bound(v.begin(), v.end(), target);
	auto second = std::upper_bound(v.begin(), v.end(), target);

	return second - first;

}

int searchInsert(const std::vector<int>& v, int target){
	
	
	auto first = std::lower_bound(v.begin(), v.end(), target);
	return first-v.begin();

}



int main(){

	std::vector<int> numbers = {1,3,3,3,3,5,5,7,8,9,9,12,18,19,22};
	std::cout << std::boolalpha << exists(numbers, 4) << "\n";
	std::cout << std::boolalpha << exists(numbers, 5) << "\n";
	std::cout << std::boolalpha << firstIndex(numbers, 3) << "\n";
	std::cout << std::boolalpha << countOccurrences(numbers, 3) << "\n";
	std::cout << std::boolalpha << searchInsert(numbers, 3) << "\n";

	return 0;
}
