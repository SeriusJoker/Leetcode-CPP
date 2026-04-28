#include <iostream>
#include <deque>
#include <string>
#include <vector>



//push_back(1) [1]
//push_back(2) [1,2]
//push_front(0) [0,1,2]
//pop_back() [0,1]
//push_front(-1) [-1,0,1]



void removeLeadingNegatives(std::deque<int>& dq){

	while(!dq.empty() && dq.front() < 0){
		dq.pop_front();
	}


}


void rotateLeft(std::deque<int>& dq, int k){

	if(dq.empty()){
		return;
	}

	for(int i = 0; i < k; i++){
		dq.push_back(dq.front());
		dq.pop_front();
	}

}

std::deque<int> buildDeque(const std::vector<std::pair<char,int>>& ops){

	std::deque<int> dq;

	for(std::pair<char,int> pair : ops){
		if(pair.first == 'F'){
			dq.push_front(pair.second);	
		}

		if(pair.first == 'B'){
			dq.push_back(pair.second);	
		}
	}
	return dq;
}

int main(){

	std::deque<int> dq;
	dq.push_front(4);
	dq.push_front(1);
	dq.push_front(3);

	while(!dq.empty()){
		std::cout << dq.front() << " ";
		dq.pop_front();
	}
	std::cout << "\n";

	dq.push_front(-1);
	dq.push_front(0);
	dq.push_front(1);
	dq.push_front(2);
	dq.push_front(-1);
	dq.push_front(-2);

	removeLeadingNegatives(dq);	
	
	for(size_t i = 0; i < dq.size() ; i++){
	
		std::cout << dq[i] << "\n";
	
	}

	rotateLeft(dq, 2);
	
	std::cout << "\n";

	for(size_t i = 0; i < dq.size() ; i++){
	
		std::cout << dq[i] << "\n";
	
	}
	
	std::vector<std::pair<char, int>> inputVector = {{'B',1}, {'B',2}, {'F',9}, {'F',8}};

	auto newDeque = buildDeque(inputVector);
	std::cout << "\n";

	for(size_t i = 0; i < newDeque.size() ; i++){
	
		std::cout << newDeque[i] << "\n";
	
	}

}
