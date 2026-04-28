#include <iostream>
#include <string>

void printLonger(const std::string& a, const std::string& b){
	int aLength = a.size();
	int bLength = b.size();

	if(aLength > bLength){
		std::cout << a << "\n";
	} else if (aLength == bLength){
		std::cout << a << "\n";
	} else {
		std::cout << b << "\n";
	}

}

void printFirstLast(const std::string& word){
	
	std::cout << word[0] << " ";
	std::cout << word[word.size()-1] << "\n";

}

bool sameText(const std::string& a, const std::string& b){
	
	return (a == b);

}

int countChar(const std::string& string, char target){

	int counter = 0;
	
	for(int i = 0; i < string.size(); i++){
		if(string[i] == target){
			counter++;	
		}
	} 


	return counter;
}

int main(){

	std::string cat = "cat";
	std::string tiger = "tiger";
	std::string milly = "milly";

	printLonger(cat, tiger);
	printLonger(milly,tiger);
	
	printFirstLast("Hello World");

	std::cout << std::boolalpha << sameText("Hello", "hello") << "\n";

	std::cout << countChar("Mississippi", 'i') << "\n";

	return 0;
}
