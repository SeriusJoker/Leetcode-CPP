#include <iostream>

int main (){
	
	int a = 17;
	int b = 5;

	std::cout << a+b << "\n";
	std::cout << a/b << "\n";
	std::cout << a%b << "\n";

	int x = 10;
	int y = 10;
	int z = 7;

	std::cout << std::boolalpha << (x==y) << "\n";
	std::cout << std::boolalpha << (x!=z) << "\n";
	std::cout << std::boolalpha << (z>=x) << "\n";

	
	int score = 10;
	score+=5;
	score-=3;
	score*=2;

	std::cout << score << "\n";

	//Can enter is true if age is 18 and hasID is true
	int age = 17;
	bool hasID = true;
	bool canEnter = (age >= 18) && (hasID);

	std::cout << std::boolalpha << canEnter << "\n";


	return 0;
}
