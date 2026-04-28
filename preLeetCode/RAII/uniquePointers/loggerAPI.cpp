#include <memory>
#include <iostream>
#include <string>

struct Value{
	
	int val;	

	Value(int i) : val(std::move(i)){
		std::cout << "Value [" << val << "] created" << "\n";
	}
	~Value(){
		std::cout << "Value [" << val << "] destroyed" << "\n";
	}

};

struct Log{

	Value& v;
	
	Log(Value& i) : v(i){
		std::cout << "Log created with value: " << v.val << "\n";	
	}
	~Log(){
		std::cout << "Log destroyed with value: " << v.val << "\n";
	}

};


int main(){
	
	std::unique_ptr v1 = std::make_unique<Value>(1);
	std::unique_ptr log1 = std::make_unique<Log>(*v1);

	std::cout << "Program ending... " << "\n";
	return 0;

}
