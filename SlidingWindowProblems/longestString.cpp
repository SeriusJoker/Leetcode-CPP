#include <vector>
#include <iostream>
#include <deque>
#include <unordered_set>
#include <string>
#include <algorithm>

void printDeque(std::deque<char> window);

class Solution{
public:
	int lengthOfLongestSubstring(std::string s){
		int maxLength = 0;
		std::unordered_set<char> charSet;
		std::deque<char> charQueue;
		
		for(char letter : s){
			
			//if(charQueue.size() > 0){
			//	printDeque(charQueue);
			//}
			
			while(charSet.count(letter)){
				charSet.erase(charQueue.front());
				charQueue.pop_front();
			}
			charSet.insert(letter);
			charQueue.push_back(letter);
			maxLength = std::max(maxLength, (int)charQueue.size());

		}

	
		return maxLength;	
	}
};


void printDeque(std::deque<char> window){

	while((int)window.size() > 0){
		std::cout << window.front() << " ";
		window.pop_front();
	}
	std::cout << "\n";


}

int main(){

	std::string letters = "pwwkew";
	Solution mySol;
	int max = mySol.lengthOfLongestSubstring(letters);
	std::cout << "Max: " << max << "\n";


}

