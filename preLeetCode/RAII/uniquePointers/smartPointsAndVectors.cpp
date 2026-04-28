#include <iostream>
#include <memory>
#include <vector>
#include <utility>

struct Entity{
	int id;

	Entity(int i) : id(std::move(i)){
		std::cout << "Created Entity: " << id << "\n";	
	}
	
	~Entity(){
		std::cout << "Destroying Entity: " << id << "\n";
	}

};


struct val{

	int v;
	val(int x) : v(std::move(x)){
		std::cout << "Constructed value: " << v << "\n";		
	}
	~val(){
		std::cout << "Killed value: " << v << "\n";
	}


};

int main(){

	std::unique_ptr<Entity> e1 = std::make_unique<Entity>(1);	
	std::unique_ptr<Entity> e2 = std::make_unique<Entity>(2);
	std::unique_ptr<Entity> e3 = std::make_unique<Entity>(3);

	std::vector<std::unique_ptr<Entity>> vec;
	vec.push_back(std::move(e1));
	vec.push_back(std::move(e2));
	vec.push_back(std::move(e3));
	vec.push_back(std::make_unique<Entity>(4));

	std::vector<std::unique_ptr<int>> nums;
	std::unique_ptr<int> n = std::make_unique<int>(10);
	nums.push_back(std::move(n));

	std::vector<std::unique_ptr<val>> values;
	values.push_back(std::make_unique<val>(1));
	values.push_back(std::make_unique<val>(2));

	for(const std::unique_ptr<val>& value : values){
		std::cout << value->v << "\n";
		if(value->v == 2){
		}
	}



	std::cout << "Ending Program" << "\n\n";	
	return 0;
}


