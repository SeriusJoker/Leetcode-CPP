#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


std::vector<int> sortAscending(std::vector<int> v){

	sort(v.begin(), v.end());
	return v; 


}

std::vector<int> sortDescending(std::vector<int> v){

	sort(v.begin(), v.end(), std::greater<int>());
	return v;

}

std::string sortStringChars(std::string s){
	
	sort(s.begin(), s.end(), std::greater<char>());
	return s;

}

std::string sortFirstKCharacter(std::string s, int k){
	
	sort(s.begin(), s.begin()+k);
	return s;

}

std::vector<char> sortCharsDescending(std::vector<char> v){
	
	sort(v.begin(), v.end(), std::greater<char>());
	return v;

}


int main(){
	
	std::vector<int> nums = {2,6,3,1,5,7,9,3,1,5,7};
	for(int x : nums) std::cout << x << " ";
	std::cout << "\n";
	nums = sortAscending(nums);
	for(int y : nums) std::cout << y << " ";
	std::cout << "\n";

	nums = sortDescending(nums);
	for(int z : nums) std::cout << z << " ";
	std::cout << "\n";

	std::string testString = "Hello World";
	for(char c : testString) std::cout << c;
	std::cout << "\n";
	testString = sortStringChars(testString);
	for(char c : testString) std::cout << c;
	std::cout << "\n";

	std::string s1 = sortFirstKCharacter("Minar Bird", 5);
	std::cout << s1 << "\n";

	std::vector<char> charVector = {'a', 'A', 'Y', 'H', 't', 'z'};
	charVector = sortCharsDescending(charVector);
	for(char c : charVector) std::cout << c << " ";
	std::cout << "\n";


	return 0;

}
