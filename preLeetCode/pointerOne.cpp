#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
//Easy 1 x =7, p points at address of x. then x changes to 10. Then we dereference p and print it. Therefore it prints 10
//
//


int main(){

	//2nd but fixed!
	int* p = nullptr; 
	if(p != nullptr){
		std::cout << *p << "\n";
	}

	std::set<int> s = {2,4,6};
	auto it = s.upper_bound(6);

	if(it == s.end()){
		std::cout << -1 << "\n";	
	} else {
		std::cout << *it;
	}

	std::unordered_map<std::string, int> mp;
	mp["cat"] = 3;
	mp["dog"] = 5;

	auto iterator = mp.find("dog");
	if(iterator != mp.end()){
		std::cout << "[" << iterator->first << "] " <<  iterator->second << "\n";
	} else {
		std::cout << -1 << "\n";
	}





	return 0;
}
