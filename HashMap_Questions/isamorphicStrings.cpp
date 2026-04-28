#include <unordered_map>
#include <string>
#include <iostream>


class Solution{
public:
	bool isIsomorphic(std::string s, std::string t){

		std::unordered_map<char,char> map;

		for(size_t i = 0; i < s.size(); i++){
		
			std::cout << s << "\t" << t << "\n";

			if(map.find(s[i]) != map.end()){
				s[i] = map[s[i]];
			}

//			if(s[i] != t[i] && map.find(s[i]) != map.end()){
//				return false;
//			}

			if(s[i] != t[i] && (map.find(s[i]) == map.end())){
				map[t[i]] = s[i];
				t[i] = s[i];
				std::cout << "Changed: " << t << "\n";
			
			}

			if(s[i] != t[i]){
				return false;
			}
			
		
		}


		return true;
	}


};


int main(){
	
	Solution mySol;
	bool answer  = mySol.isIsomorphic("f11", "b23");

	std::cout << std::boolalpha << answer << "\n";


}
