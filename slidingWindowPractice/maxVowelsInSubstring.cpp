#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_set>


int maxVowels(std::string letters, int k){
	int max = 0;
	int currentCount = 0;
	std::deque<char> characters;
	std::unordered_set<char> vowels = {'a','e','i','o','u'};

	for(int i = 0; i < letters.size(); ++i){
		if((int)characters.size() == k){
			if(vowels.count(characters.front())){
				currentCount--;
			}
		characters.pop_front();
		characters.push_back(letters[i]);

			
		} else {
			characters.push_back(letters[i]);
		}

		if(vowels.count(characters.back())){
			currentCount++;
			max = std::max(max, currentCount);	
		}


	}

	return max;

}

int main(){
	
	std::string String1 = "abciiidef";
	int answer1 = maxVowels(String1, 4);
	std::cout << String1 << " " << answer1 << "\n";


}
