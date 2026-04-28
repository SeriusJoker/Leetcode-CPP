#include <iostream>
#include <vector>

void safeSwap(int* a, int* b){
	
	if(a != nullptr || b != nullptr){
		int temp = *a;
		*a = *b;
		*b = temp;
	}

}

int* maxPtr(int* a, int* b){
	
	if(a == nullptr || b == nullptr){
		int* returnValue = nullptr;
	       	return returnValue;	
	} else if (*a == *b){
		return a;
	} else if (*a > *b) {
		return a;
	} else {
		return b;
	}

}

void setToNull(int** pp){

	if(*pp == nullptr){
		return;	
	} else {
		*pp = nullptr;
	}

}

int main(){

	int x = 3;
	int y = 5;

	std::cout << "X: " << x << " Y: " << y << "\n";
	safeSwap(&x, &y);
	std::cout << "X: " << x << " Y: " << y << "\n";

	auto answer = maxPtr(&x, &y);
	if(answer != nullptr){
		std::cout << *answer << "\n";
	}

	int num = 5;
	int* numPtr = &num;
	int** numNumPtr = &numPtr;
	
	std::cout << *numNumPtr << "\n";

	setToNull(numNumPtr);
	if(*numNumPtr == nullptr){
		std::cout << "It worked! you have a null ptr" << "\n";
	} else { 
		std::cout << "Uh oh, that didn't work. It still has a value" << "\n";
	}
	



}
