#include <vector>
#include <string>
#include <iostream>


class Solution {
	
public: 
	int add(int a, int b){
		return a+b;
		
	}

	void incrementAll(std::vector<int>& nums){
		for(size_t i = 0; i < nums.size(); ++i){
			nums[i]++;	
		}
	}

	bool isEven(int x){
		if(x%2==0){
			return true;
		} else{
			return false;
		}
	}

	int countEvens(std::vector<int>& nums){
		int even = 0;
		for(int val : nums){
			if(isEven(val)){
				even++;
			}
		}
		return even;
	}




};


int main(){
	
	int num1 = 5;
	int num2 = 8;

	Solution mySolution;
	int result = mySolution.add(num1,num2);
	std::cout << result << "\n";

	std::vector<int> numList = {1,2,3,4,5,6,7,8,9};
	for(int val : numList){
		std::cout << val << " ";
	}
	std::cout << "\n";
	mySolution.incrementAll(numList);
	for(int val : numList){
		std::cout << val << " ";
	}
	std::cout << "\n";
	
	int evenNums = mySolution.countEvens(numList);
	std::cout << evenNums << "\n";


	return 0;

}
