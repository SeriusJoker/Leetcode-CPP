#include <iostream>
#include <string>
#include <vector>

void increment(int* p){

	*p = *p + 1;

}

void clampNonNegative(int* ptr){
	if(ptr == nullptr){
		return;
	}

	if(*ptr < 0){
		*ptr = 0;
	}
}

void makeATheMax(int* a, int* b){

	if(a == nullptr || b == nullptr){
		return;
	}

	if(*a < *b){
		*a = *b;
	}


}

void rotate3(int* a, int* b, int* c){
	
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
	
}

int main(){

	int first = 1;
	std::cout << first << "\n";
	increment(&first);
	std::cout << first << "\n";

	int negative = -5;
	std::cout << negative << "\n";
	clampNonNegative(&negative);
	std::cout << negative << "\n";
		
	makeATheMax(&negative, &first);
	std::cout << "Negative: " << negative << " first: " << first << "\n";

	int a = 1;
	int b = 2;
	int c = 3;

	std::cout << "A: " << a << "\tB: " << b << "\tC: " << c << "\n";
	rotate3(&a, &b, &c);	
	std::cout << "A: " << a << "\tB: " << b << "\tC: " << c << "\n";



}

