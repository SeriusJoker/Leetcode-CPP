#include <iostream>
#include <sstream>
#include <string>
#include <vector>




int main(){
	std::string input = "dog cat cat dog";
	std::string pattern = "abba";
	std::stringstream ss;

	ss << input;
	std::cout << ss;


	return 0
}
