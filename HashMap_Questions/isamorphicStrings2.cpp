#include <unordered_map>
#include <string>
#include <iostream>


class Solution{
public:
        bool isIsomorphic(std::string s, std::string t){
		std::unordered_map<char,char> sMap;
		std::unordered_map<char,char> tMap;

		for(size_t i = 0; i < s.size(); ++i){
			
			if(sMap.count(s[i]) && sMap[s[i]] != t[i]){
				return false;
			}

			if(tMap.count(t[i]) && tMap[t[i]] != s[i]){
				return false;
			}

			sMap[s[i]] = t[i];
			tMap[t[i]] = s[i];
		
		}
		return true;
        }


};


int main(){

        Solution mySol;
        bool answer  = mySol.isIsomorphic("f11", "b23");

        std::cout << std::boolalpha << answer << "\n";


}
