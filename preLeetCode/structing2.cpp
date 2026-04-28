#include <iostream>
#include <string>
#include <vector>

struct ListNode{
	
	int val;
	ListNode* next;
	ListNode(int x): val(x), next(nullptr) {};


};

ListNode* build123(){

	ListNode* head = new ListNode(1);
	ListNode* node2 = new ListNode(2);
	ListNode* node3 = new ListNode(3);

	head->next = node2;
	node2->next = node3;
	
	return head;
}

void printList(ListNode* head){


	while(head->next != nullptr){
		std::cout << head->val << " ";
	}
	
}

int main(){
	
	ListNode* headNode = build123();

	return 0;

}
