#include <iostream>

int square(int n){

	return n*n;
}

int maxOfTwo(int a, int b){
	if(a >= b){
		return a;
	}
	return b;

}

bool isEven(int n){
	if(n%2 == 0){
		return true;
	}
	return false;
}

int sumUpToN(int n){
	
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum+=i;
	}

	return sum;
}


int main(){

	int length = 6;
	std::cout << square(6) << "\n";

	std::cout << std::boolalpha << isEven(6) << "\n";
	std::cout << std::boolalpha << isEven(3) << "\n";

	std::cout << maxOfTwo(7,12) << "\n";
	std::cout << sumUpToN(20) << "\n";

	return 0;
}
