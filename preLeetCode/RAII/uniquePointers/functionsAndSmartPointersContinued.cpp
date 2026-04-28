#include <iostream>
#include <memory>


struct Value{
	int v;
	Value(int i) : v(std::move(i)){
		std::cout << "Value [" << v << "] created" << "\n";
	} 
	~Value(){
		std::cout << "Value [" << v << "] destroyed" << "\n";
	}
};

void printVal(const Value& val){
	std::cout << val.v << "\n";
}

void doubleIt(Value& value){
	
	value.v = value.v*2;
		
}

void consume(std::unique_ptr<Value> val){
	std::cout << val->v << "\n";
}

std::unique_ptr<Value> tryCreate(int x){
	if(x == 0){
		return nullptr;
	}
	return std::make_unique<Value>(x);

}

std::unique_ptr<Value> destroyNegative(std::unique_ptr<Value> value){
	
	if(value->v < 0){
		return nullptr;
	}
	return value;

}



int main(){

	std::unique_ptr v1 = std::make_unique<Value>(1);
	printVal(*v1);
	doubleIt(*v1);
	printVal(*v1);
	consume(std::move(v1));

	auto v2 = tryCreate(0);
	auto v3 = tryCreate(3);
	
	std::unique_ptr<Value> v4 = destroyNegative(tryCreate(4));
	std::unique_ptr<Value> v5 = destroyNegative(tryCreate(-1));

	//Already demonstrated skills for medium3 . Moving on for my times sake


	std::cout << "Program ended... " << "\n";
	return 0;
}
