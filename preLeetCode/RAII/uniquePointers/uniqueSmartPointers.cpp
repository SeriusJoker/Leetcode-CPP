#include <memory>
#include <iostream>
#include <string>


struct A{
	A(){
		std::cout << "Construct A" << "\n";
	}
	~A(){
		std::cout << "Deconstruct A" << "\n";
	}
	
};

struct Widget{
	std::string name;	
	
	Widget(std::string n) : name(std::move(n)) {
		std::cout << "Constructed Widget with name: " << name << "\n";
	}

	~Widget(){
		std::cout << "Deconstructed Widget with name " << name << "\n";
	}

	void print(){
		std::cout << "Entity Exists " << "\n";
	}


};

struct Resource{
	Resource(){std::cout << "Aquire" << "\n";}
	~Resource(){std::cout << "Release" << "\n";}
	void print(){
		std::cout << "Printing from Resource" << "\n";
	};


};

std::unique_ptr<Resource> makeResource(){
	return std::make_unique<Resource>();

}

struct Logger {
	Logger(const std::string& name){
		std::cout << "Logger started: " << name << "\n";
	}
	~Logger(){
		std::cout << "Logger is dead" << "\n";
	}

	void print(const std::string& msg){
		std::cout << "LOG: " << msg << "\n";
	}


};

struct Application{

	std::unique_ptr<Logger> myLog;

	Application(std::string n){
		myLog = std::make_unique<Logger>(n);	
	}

	~Application(){
		std::cout << "Shutting down Application" << "\n";
	}
	
	void logMessage(std::string s){
		myLog->print(s);
	}


};

int main(){
	
	std::unique_ptr<A> firstSmart = std::make_unique<A>();
	std::unique_ptr<A> secondSmart = std::move(firstSmart);
	
	std::unique_ptr<Widget> w1 = std::make_unique<Widget>("Widgy");
		
	std::unique_ptr<Resource> r1 = std::make_unique<Resource>();	
	r1->print();

	std::unique_ptr<Resource> r2 = std::make_unique<Resource>();

	std::unique_ptr<Application> app = std::make_unique<Application>("Jeff");
	app->logMessage("Hello World");
	
	std::cout << "Program ending... " << "\n\n";
	return 0;
}


