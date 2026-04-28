#include <iostream>

int main(){

	for(int i = 1; i <= 20; i++){
	
		if(i%3==0){
			continue;		
		}
		std::cout << i << "\n";
	
	}

	for(int i = 1; i <=100; i++){
		if(i%7==0){
			std::cout << i << "\n";
			break;
		}
	}

	for(int i = 1; i <= 15; i++){
		if(i%2 == 0){
			continue;
		}
		std::cout << i << "\n";

	}


	for(int i = 1; i <=100; i++){
		if(i%4==0 && i%6==0){
			std::cout << i << "\n";
			break;
		}
	}

	return 0;
}
