#include <iostream>
#include <vector>
#include <deque>
#include <string>

void printVector(std::vector<int> v){
	
	for(int val : v){
		std::cout << val << " ";
	}

	std::cout << "\n";

}

void printDeque(std::deque<int> v){
	
	while(!v.empty()){
		std::cout << v.front() << " ";
		v.pop_front();
	}
	
	std::cout << "\n";
}

std::vector<int>MaxOfSlidingWindow(std::vector<int>& nums, int k){

	std::deque<int> indicies;
	std::vector<int> outputVector;

	for(int i = 0; i < nums.size(); ++i){
		//std::cout << nums[i] << " ";
		if(indicies.empty()){
			indicies.push_front(i);
			printDeque(indicies);
			continue;
		}
		
		//Check for out of index ints at front	
		if(indicies.front() < i-k+1){
			indicies.pop_front();
		}	

		//Smaller values that came previously are never used again
		while(!indicies.empty() && nums[i] > nums[indicies.back()]){
			indicies.pop_back();
		}

		indicies.push_back(i);

		if(i >= k-1){
			outputVector.push_back(nums[indicies.front()]);
		}	


		printDeque(indicies);
	}
	std::cout << "\n";


	return outputVector;
}





int main(){

	std::vector<int> inputVector = {1,2,3,4,5};
	int windowSize = 3;
	auto maxVector = MaxOfSlidingWindow(inputVector, windowSize);
	printVector(maxVector);

	std::cout << "\n";
	std::vector<int> AnotherInputVector = {2, 1, 4, 3, 6};
	auto newMaxVector = MaxOfSlidingWindow(AnotherInputVector, windowSize);
	printVector(newMaxVector);


}
