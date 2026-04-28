#include <iostream>
#include <queue>
#include <vector>

void drainPrint(std::queue<int>& q){
	
	while(!q.empty()){
		std::cout << q.front() << "\n";
		q.pop();
	}
	
}

std::vector<int> maxSlidingWindow(const std::vector<int>& nums, int target){
	
 	//Add all nums into queue so we can easily pop values :)
	std::vector<int> outputVector;
	std::queue<int> candidateForBest;
	int outputSize = nums.size() - (target-1);
		
	for(int i = 0; i <= target; i++){
		
		

		if(outputVector < outputsize){	
			break;		
		}
	}
	
	return outputVector;
	
}

int main(){
	//Question one queue like this: front{2,3,4}back
	//Always check empty otherwise undefineted behaviour upon pop or access
	//
	//

	std::queue<int> myQueue;
	myQueue.push(1);
	myQueue.push(2);
	myQueue.push(3);

	drainPrint(myQueue);

	std::vector<int> nums = {1,3,-1,-3,5,3,6,7};

	//q.push({1, 3, -1, -3, 5, 3, 6, 7});
	std::cout << nums.size() << "\n";

	return 0;

}
