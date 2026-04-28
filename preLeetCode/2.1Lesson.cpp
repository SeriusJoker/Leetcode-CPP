#include <iostream>

int main(){
	
	int n = -3;

	if(n > 0){
		std::cout << "positive" << "\n";
	} else if(n<0){
		std::cout << "negative" << "\n";
	} else {
		std::cout << "Zero" << "\n";
	}

	int a = 7;
	int b = 12;

	if(a>b){
		std::cout << a << "\n";
	} else {
		std::cout << b << "\n";
	}

	int mark = 48;

	if(mark >= 50){
		std::cout << "Pass" << "\n";
	} else {
		std::cout << "Fail" << "\n";
	}

	int m = 73;

	if(m >= 80){
		std::cout << "A" << "\n";
	} else if(m<80 && m>=70){
		std::cout << "B" << "\n";
	} else if(m<70 && m>=60){
		std::cout << "C" << "\n";
	} else if(m<60 && m>=50){
		std::cout << "D" << "\n";
	} else{
		std::cout << "F" << "\n";
	}
	
	
	return 0;
}
