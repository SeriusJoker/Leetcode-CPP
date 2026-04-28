#include <stack>
#include <iostream>
#include <string>



//push(1)
//push(2)
//push(3)
//pop()
//push(4), Stack top {4,2,1} stack end
//
//
//Running top on an empty stack. Undefined behavour
//

void printReverse(const std::string& s){
	
	std::stack<char> pancakes;
	for(char c : s){
		pancakes.push(c);
	}
	
	while(!pancakes.empty()){
		std::cout << pancakes.top() << "\n";
		pancakes.pop();
	}

}

bool isValid(const std::string& s){

	std::stack<char> st;

	for(char c : s){
		if(c == '{' || c == '(' || c == '['){ //open bracket
			st.push(c);
		}
	
		if(c == '}' || c == ')' || c == ']'){ //close bracket
			
			if(st.empty()){
				return false;
			}
			
			//I think there might be a more elegant way todo this but lets go with this
			if((c == '}' && st.top() == '{') || (c == ')' && st.top() == '(') || ( c == ']' && st.top() == '[')){
				st.pop();
			} else {
				return false;
			}

		}
		
		
	}
	
	if(st.empty()){
		return true;
	} else {
		return false;
	}

}

int main(){

	printReverse("Pancakes");	
	std::string bad = "([)]";
	std::string good = "({[]})";

	std::cout << bad << " -> " << std::boolalpha << isValid(bad) <<"\n";
	std::cout << good << " -> " << std::boolalpha << isValid(good) <<"\n";



	return 0;
}
