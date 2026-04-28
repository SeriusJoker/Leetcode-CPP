#include <iostream>

int main(){
	
	for(int i = 1; i <= 10; i++){
		std::cout << i << "\n";
	}

	int N = 10;
	int sum = 0;
	for(int j = 1; j <= N; j++){
		sum+=j;
	}
	std::cout << sum << "\n";


	int k = 20;
	for(int i = 1; i<=k; i++){
		if(i%2==0){
			std::cout << i << "\n";
		}
	}

	int w = 7;

	for(int i = 1; i<=12; i++){
		std::cout << w << " x " << i << " = " << w*i << "\n";
	}

	return 0;
}
