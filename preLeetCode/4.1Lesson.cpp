#include <iostream>


int main(){
	
	int arrayFirst[4] = {3,6,9,12};
	for(int i = 0; i < 4; i++){
		std::cout << arrayFirst[i] << "\n";
	}


	int array[5] = {5,5,5,5,5};
	int sum = 0;
	for(size_t i = 0; i < 5; i++){
		sum+=array[i];
	}
	std::cout << sum << "\n";
	
	int maxArray[5] = {4, 2, 9, 1, 7};
	int largest = 0;
	for(size_t i = 0; i < 5; i++){
		if(maxArray[i] > largest) largest = maxArray[i];
	}
	std::cout << largest << "\n";

	int reverseArray[5] = {1,2,3,4,5};
	std::cout << "Array before reversal \n";
	for(int i = 0; i < 5; i++){
		std::cout << reverseArray[i] << " ";
	}
	std::cout << "\n";
	// i is start of array
	// j is end of array
	int i = 0;
	int j = 4;	
	while(i < j){
		int temp = reverseArray[i];
		reverseArray[i] = reverseArray[j];
		reverseArray[j] = temp;
		j--;
		i++;
	}



	std::cout << "Array after reversal \n";
	for(int i = 0; i < 5; i++){
		std::cout << reverseArray[i] << " ";
	}
	std::cout << "\n";
		

	return 0;
}
