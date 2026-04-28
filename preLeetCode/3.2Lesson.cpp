#include <iostream>

void setZeroValue(int x){
	x = 0;
}

void setZeroRef(int& x){
	x = 0;
}

void swapTwo(int& a, int& b){
		
	int temp = a;
	a = b;
	b = temp;

}

int addTen(int x){
	return x + 10;

}

void clamp(int& x, int low, int high){

	if(x > high){
		x = high;
	} else if (x < low){
		x = low;
	} else {
		x = x;
	}

}


int main(){

	int myX = 1;
	setZeroValue(myX);
	std::cout << myX << "\n";

	setZeroRef(myX);
	std::cout << myX << "\n";
	

	int myA = 5; 
	int myB = 10;

	swapTwo(myA, myB);
	std::cout << myA << "\n";
	std::cout << myB << "\n";

	std::cout << addTen(myB) << "\n";
	
	clamp(myB, 10, 100);

	std::cout << myB << "\n";


	return 0;
}
