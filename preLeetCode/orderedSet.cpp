#include <iostream>
#include <vector>
#include <string>
#include <set>



int main(){

	std::set<int> firstSet;

	firstSet.insert(4);
	firstSet.insert(2);
	firstSet.insert(5);
	firstSet.insert(2);
	firstSet.insert(1);

	for(int x : firstSet){
		std::cout << x << "\n";
	}

	std::set<std::string> names;
	names.insert("bob");
	names.insert("alice");
	if(names.count("alice")){
		std::cout << "alice" << "\n";		
	}

	std::set<char> letters = {'c','a','b','b'};
	letters.erase('b');
	
	for(char c : letters){
		std::cout << c << "\n";
	}
	
	std::vector<int> numbers = {-1,1,3,4};
	std::set<int> setNums;
	for(int num : numbers){
		setNums.insert(num);
	}
	int count = 1;	
	while(count < 1000){
		if(setNums.count(count)){
			count++;
			continue;
		}
		std::cout << count << "\n";
		break;
	}

	return 0;
}
