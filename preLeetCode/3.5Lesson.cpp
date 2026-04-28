#include <iostream>
#include <string>

int sumToN(int n){
	

	if(n==0) return 0;

	return n + sumToN(n-1);


}

long long powerFunction(int x, int n){
	
	if(n==0) return 1;

	return 1LL * x * powerFunction(x, n-1);

}


int main(){
	
	int sum = sumToN(5);
	std::cout << sum << "\n";

	long long power = powerFunction(2,5);
	std::cout << power << "\n";

	return 0;
}


