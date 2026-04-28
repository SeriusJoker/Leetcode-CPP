#include <memory>
#include <string>
#include <vector>
#include <utility>
#include <iostream>

struct Val{

	int v;
	Val(int x) : v(std::move(x)){
		std::cout << "Val created: " << v << "\n";
	};
	~Val(){
		std::cout << "Val unalived: " << v << "\n";
	}

};


int main(){
	
	std::vector<std::unique_ptr<Val>> values;

	std::unique_ptr<Val> p1 = std::make_unique<Val>(1);
	values.push_back(std::move(p1));
	
	values.push_back(std::make_unique<Val>(2));
	values.push_back(std::make_unique<Val>(3));
	values.push_back(std::make_unique<Val>(0));


	for(auto i = values.begin(); i < values.end(); ++i){
		std::cout << (*i)->v << "\n";	
	}

	for(auto j = values.begin(); j < values.end();){
		if((*j)->v == 0){
			j = values.erase(j);
		} else {
			++j;
		}
	
	}

	for(auto i = values.begin(); i < values.end(); ++i){
		std::cout << (*i)->v << "\n";	
	}
	

	for(auto i = values.begin()+1; i < values.end();){
		if((*i)->v < (*(i-1))->v){
			i = values.erase(i);
		} else {
			++i;
		}
	}


	std::cout << "Ending Program... " << "\n\n";
}
