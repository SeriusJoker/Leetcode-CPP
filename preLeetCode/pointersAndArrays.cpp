#include <iostream>
#include <string>


void printArray(int* begin, int* end){

	for(int* p = begin; p != end ; ++p){
		std::cout << *p << " "; 
	}
	std::cout << "\n";

}

int sumRange(int* begin, int* end){
	int sum = 0;
	for(int* p = begin; p != end; ++p){
		sum += *p;
	}
	return sum;
}

int main(){
	
	int arr1[] = {1,2,3,4,5};

	int* begin = arr1+0;
	int* end = arr1+5;
	
	printArray(begin, end);
	
	std::cout << sumRange(begin, end) << "\n";	

	return 0;
}
