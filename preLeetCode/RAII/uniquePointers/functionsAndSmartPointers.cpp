#include <iostream>
#include <memory>
#include <vector>
#include <string>


struct Task{
	int id;
	Task(int i): id(i){
		std::cout << "Task created with ID: " << id << "\n";
	}
	~Task(){
		std::cout << "Task ended with ID: " << id << "\n";
	}

};


void consume(std::unique_ptr<Task> t){
	std::cout << "Consumed " << t->id << "\n";
}

void show(const Task& t){
	std::cout << t.id << "\n";
}

std::unique_ptr<Task> make_task(int id){
	return std::make_unique<Task>(id);

}



int main(){

	std::unique_ptr t = std::make_unique<Task>(3);
//	consume(std::move(t)); //Will delete when consume function finishes. 
	show(*t);

	std::unique_ptr<Task> t2 = make_task(2);
	show(*t2);


	std::unique_ptr a = std::make_unique<Task>(1);
	std::unique_ptr b = std::make_unique<Task(2);



	std::cout << "Program ending... " << "\n";
	return 0;
}
