#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

void reverseString(std::vector<char>& s){
	
	int left = 0;
	int right = (int)s.size() -1; 
	char temp;

	while(left < right){
		temp = s[left];
		s[left] = s[right];
		s[right]=temp;
		left++;
		right--;

	}

}

void printLetters(std::vector<char>& letters){
	
	for(char letter : letters){
		std::cout << letter << " ";
	}
	std::cout << "\n";

}

bool checkPalindrome(std::string str){

	int left = 0;
	int right = (int)str.size()-1;

	while(left < right){
		if(str[left]!=str[right]){
			return false;
		}
		left++;
		right--;	
	}
	
	return true;

}
// I dont know why this is included here. It doesnt seem like a 2 pointer problem... 
int removeElement(std::vector<int>& nums, int val){

	int size = (int)nums.size();

	for(int i = 0; i < size; ++i){
		if(nums[i] == val){
			nums.erase(nums.begin()+i);
			size = (int)nums.size();
			i--;
		}	

	}
	return nums.size();

}

int removeDuplicates(std::vector<int>& nums){

	std::unordered_set<int> set;
	int write = 0;

	for(int read = 0; read < (int)nums.size(); ++read){
		
		if(!set.count(nums[read])){
			nums[write] = nums[read];
			++write;
				
		} 
		
		set.insert(nums[read]);	
	
	}

	return write;

}



std::vector<int> twoSum(std::vector<int>& numbers, int target){

	int left = 0;
	int right = (int)numbers.size()-1;
	int sum;
	std::vector<int> returnVector;
	while(left < right){
		sum = numbers[left]+numbers[right];

		if(sum > target){
			right--;
		}

		if(sum < target){
			left++;
		}

		if(sum == target){
			returnVector.push_back(left);
			returnVector.push_back(right);	
			return returnVector;
		}

	
	}

	return returnVector;

}


int main(){

	std::vector<char> letters = {'a', 'b', 'c', 'd', 'e'};
	printLetters(letters);
	reverseString(letters);
	printLetters(letters);

	std::string racecar = "racecar";
	std::cout << "Word: " << racecar << "\t Palindrome Status: " << std::boolalpha << checkPalindrome(racecar) << "\n";
	std::string boris = "boris";
	std::cout << "Word: " << boris << "\t Palindrome Status: " << std::boolalpha << checkPalindrome(boris) << "\n";
	
	std::vector<int> nums = {1,2,2,2,3,4};
	std::cout << nums.size() << "\n";

	std::cout << removeElement(nums,2) << "\n";
	for(int val : nums){
		std::cout << val << " " << "\n";
	}

	std::vector<int> numbers = {1,2,3,5,7,9};
	std::vector<int> resultOfNumber = twoSum(numbers, 9);
	if(resultOfNumber.size() > 0){
		std::cout << resultOfNumber[0] << " " << resultOfNumber[1] << "\n";		
	}



	return 0;
}
