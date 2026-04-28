#include <iostream>

int main(){
	int age = 21;
	std::cout << "Age is: " << age << "\n";
	
	double temperature = 18.5;
	std::cout << "Temperature is: " << temperature << "\n";

	char initial = 'A';
	std::cout << "Initial is: " << initial << "\n";

	bool done = false;
	int x = 3;
	double y = 4.5;

	std::cout << x << "\n" << y << "\n" << done << "\n";
	// Printing bool as words not number...
	std::cout << std::boolalpha << done << "\n";

	long long population = 7800000000LL;
	std::cout << population << "\n";

	long long a = 90000000000LL;
	long long b = 20000000000LL;
	std::cout << a+b << "\n";

	long long s = 300000LL;
	long long l = 400000LL;
	std::cout << s*l << "\n";

	int t = 100000;
	int u = 100000;
	std::cout << t*u << "\n";

	long long r = 100000LL;
	long long e = 100000LL;
	std::cout << r*e << "\n";



	return 0;
}
