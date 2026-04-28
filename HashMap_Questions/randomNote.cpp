#include <unordered_map>
#include <string>
#include <iostream>

class Solution{
public:
	bool canConstruct(std::string ransomNote, std::string magazine){
		
		std::unordered_map<char,int> map;

		for(char letter : magazine){
			map[letter]++;
		}

		for(char l : ransomNote){
			if(map[l] > 0){
				map[l]--;
			} else {
				return false;
			}
		}


		return true;
	}

};


int main(){
	
	std::string note = "aac";
	std::string magazine = "aab";
	Solution mySol;
	bool answer = mySol.canConstruct(note, magazine);
	std::cout << std::boolalpha << answer << "\n";


	return 0;
}
