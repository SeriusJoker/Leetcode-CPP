#include <iostream>
#include <vector>
#include <string>

struct Point{

	int x;
	int y;


};

struct FancyPoint{

	int x;
	int y;

	FancyPoint(int a, int b){
		x = a;
		y = b;
	}

};

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}

};

ListNode* buildTwoNodeList(){

	ListNode* ptrNode1 = new ListNode(1);
	ListNode* ptrNode2 = new ListNode(2);

	ptrNode1->next = ptrNode2;
	return ptrNode1;

}

Point makePoint(int x, int y){
	
	Point p;
	p.x = x;
	p.y = y;

	return p;

}

int getNodeLength(ListNode* head){

	int count = 1; //Always atleast node one given input;
	
	while(head->next != nullptr){
		count++;
		head = head->next;

	}
		

	return count;

}


int sumPointDot(const Point& p){

	return p.x + p.y;

}

int sumPointArrow(const Point* p){

	return p->x + p->y;

}

int main(){

	Point myFirstPoint = makePoint(1,2);
	std::cout << myFirstPoint.x << " " << myFirstPoint.y << "\n";	
	std::cout << sumPointDot(myFirstPoint) << "\n";
	Point* pointerToPoint = &myFirstPoint;
	std::cout << sumPointArrow(pointerToPoint) << "\n";
	std::cout << sumPointArrow(&myFirstPoint) << "\n";
	
	FancyPoint fPoint(1,2);
	std::cout << fPoint.x << " " << fPoint.y << "\n";

	ListNode* headNode = buildTwoNodeList();
	std::cout << headNode->val << "\n";
	std::cout << headNode->next->val << "\n";
	getNodeLength(headNode);	

	return 0;
}
