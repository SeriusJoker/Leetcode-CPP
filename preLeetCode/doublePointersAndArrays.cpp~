#include <iostream>



int countValue(int* begin, int* end, int target){
	int count = 0;
	for(int* i = begin; i!=end; ++i){
		if(*i == target){
			count++;
		}
	}
	return count;
}

int* firstMatch(int* begin, int* end, int target){

	for(int* i = begin; i!= end; ++i){
		if(*i == target){
			return i;
		}
	}

	return nullptr;

}

bool resetToBegin(int** pp, int* begin){
	
	if(pp!=nullptr){
		*pp = begin;	
		return true;
	}
	return false;
}

void reverseRange(int* begin, int* end){
	
	int* left = begin;

	int* right = end-1;

	if(left == nullptr || right == nullptr){
		return;
	}
	int temp;
	while(left < right){ //if this works then that means I can do arithmatic on addresses.
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
	
	

}


int main(){

	int testArray[] = {1,2,3,4,9,6,7,8,9};
	int* start = testArray + 0;
	int* end = testArray + 9;

	std::cout << countValue(start, end, 9) << "\n";
	
	int* matchPtr = firstMatch(start, end, 9);

	if(firstMatch != nullptr){
	std::cout << matchPtr << " This should be a memory address of loc with first 9\n";
	std::cout << matchPtr << ":" << *matchPtr << "\n";
	}

	int x = 5;
	int* xPtr = &x;
	int** xPtrPtr = &end;

	std::cout << xPtrPtr << "\n";
	resetToBegin(xPtrPtr, xPtr);
	std::cout << **xPtrPtr << "\n";
	
	int newArray[] = {1,2,3,4,5,6};
	int* start1 = newArray;
       	int* end1 = newArray + 6;	
	std::cout << newArray[1] << newArray[4] << "\n";
	reverseRange(start1, end1);
	std::cout << newArray[1] << newArray[4] << "\n";


}
