#include <iostream>
#include <string>

bool isDigit(const char& c){
	if(c >= 48 && c <= 57){
		return true;
	} else {
		return false;
	}

}

bool isUpperCase(const char& c){
	if(c >= 'A' && c <= 'Z'){
		return true;
	} else {
		return false;
	} 

}

int countDigits(const std::string& s){
	int counter = 0;
	for(int i = 0; i < s.size(); i++){
		if(isDigit(s[i])){
			counter++;			
		}
	}

	return counter;
}

bool isValidID(const std::string& s){

	if(s.size()!=6){
		return false;
	}

	if(!isUpperCase(s[0]) || !isUpperCase(s[1])){
		return false;	
	}

	if(!isDigit(s[2]) || !isDigit(s[3]) || !isDigit(s[4]) || !isDigit(s[5])){
		return false;
	}

	return true;
}


int main(){

	char testNum = '7';
	char testChar = 'x';

	std::cout << std::boolalpha << isDigit(testChar) << "\n";
	std::cout << std::boolalpha << isDigit(testNum) << "\n";
	
	std::cout << std::boolalpha << isUpperCase('A') << "\n";
	std::cout << std::boolalpha << isUpperCase ('a') << "\n";

	std::cout << countDigits("He11o J1m B0b") << "\n";
	
	std::cout << std::boolalpha << isValidID("AB1234") << "\n";
	std::cout << std::boolalpha << isValidID("Ac1234") << "\n";
	std::cout << std::boolalpha << isValidID("A1234") << "\n";
	std::cout << std::boolalpha << isValidID("AC123a") << "\n";





	return 0;
}

