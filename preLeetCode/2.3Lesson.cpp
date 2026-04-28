#include <iostream>

int main(){

	int n = 5;

	while(n > 0){
		std::cout << n << "\n";
		n--;
	}

	int num = 10;
	int sum = 0;
	while(num > 0){
		sum+=num;
		num--;
		

	}
	std::cout << sum << "\n";


	int divider = 20;
	while(divider > 0){
		std::cout << divider << "\n";
		divider = divider/2;	
			
	}

	//reverse int
	int unReversed = 12340;
	int reversed = 0;

	while(unReversed > 0){
		int lastDigit = unReversed %10;
		reversed = reversed * 10 + lastDigit;
		unReversed = unReversed / 10;

	}	


	std::cout << reversed << "\n";	
	return 0;
}



