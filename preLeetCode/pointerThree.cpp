#include <iostream>
#include <string>
#include <vector>

//int x = 4;
//int* p = &x -> p now hold address of x
//*p = 9 changed value at p
//now u will print 9
//

void swapInts(int* a, int* b){


}

void printValue(int* ptr){

	if(ptr == nullptr){
		std::cout << "null" << "\n";
	} else {
		std::cout << *ptr << "\n";
	}

}

int main(){
	
	int x = 12;
	int* p = &x;

	std::cout << *p << "\n";

	int* p1 = nullptr;
	
	if(p1 != nullptr){
		std::cout << p1 << "\n";
	}



//int x = 42;
//int* p = &x;

//std::cout << x << "\n";   // prints: 42 
//std::cout << p << "\n";   // prints: address of x 
//std::cout << *p << "\n";  // prints: 42
//	
//

	int a = 1;
	int *ptr = &x;

	*ptr = 100;

	std::cout << x << "\n";	

	printValue(&a);
	printValue(p1);

	return 0;
}
