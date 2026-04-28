#include <iostream>
#include <vector>
#include <string>

struct ListNode{
	
	int val;
	ListNode* next = nullptr;
	ListNode(int x){
		val = x;
	}

};


int listLength(ListNode* head){

	int count = 0;
	ListNode* current = head;

	while(current!=nullptr){
		count++;
		current=current->next;
	}
	return count;
}

ListNode* middleNode(ListNode* head){

	int lLength = listLength(head);
	lLength = lLength/2 + 1;
	int count = 1;
	ListNode* current = head;

	while(current!=nullptr){
		if(count == lLength){
			return current;
		}
		count++;
		current = current->next;

	}

	return current;

}

ListNode* newMiddleNode(ListNode* head){

	ListNode* slow = head;
	ListNode* fast = head;

	while(fast != nullptr && fast->next != nullptr){
		slow = slow->next;
		fast = fast->next->next;	
	}

	return slow;


}

bool detectCycle(ListNode* head){
	
	ListNode* slow = head;
	ListNode* fast = head;

	while(fast!=nullptr && fast->next!=nullptr){
		slow = slow->next;
		fast = fast->next->next;
		if(slow==fast){
			return true;
		}

	}

	return false;
}

ListNode* removeElements(ListNode* head, int val){

	ListNode dummy = new ListNode(0);
	dummy.next = head;

	ListNode* prev = &dummy;
	ListNode* current = head;

	while(current!=nullptr){
		if(current->val == val){
			ListNode* toDelete = current
			prev->next = current->next;
			current = current->next;
			delete toDelete; 

		} else{
			prev = current;
			current = current->next;	
		}
	
	
	}
	return dummy.next;
}


int main(){
	
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);

	int listyLength = listLength(head);

	std::cout << "ListNode Length: " << listyLength << "\n";

	ListNode* mNode = middleNode(head);

	std::cout << "Middle Node Value: " << mNode->val << "\n";
	
	ListNode* newMiddle = newMiddleNode(head);
	std::cout << "Middle Node Value: " << newMiddle->val << "\n";

	ListNode* newHead = new ListNode(1);
	ListNode* second = new ListNode(2);
	ListNode* third = new ListNode(3);

	newHead->next = second;
	second->next = third;
	third->next = newHead;
	
	std::cout << std::boolalpha << detectCycle(newHead) << "\n";
	std::cout << std::boolalpha << detectCycle(head) << "\n";





}
