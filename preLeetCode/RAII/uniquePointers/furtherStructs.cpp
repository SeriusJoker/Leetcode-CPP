#include <iostream>
#include <string>


struct Test {
	std::string name;

	Test(std::string n) : name(std::move(n)){
		std::cout << "The name is: " << name << "\n";
		std::cout << "n " << n << "\n";
	}
	
	~Test() {
		std::cout << "Release " << name << "\n";
	}

};



int main(){

	Test t("Alex");
	std::cout << "Inside Scope of Program" << "\n";



	return 0;
}
