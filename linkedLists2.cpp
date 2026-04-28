#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

struct ListNode{
	
	int val;
	ListNode* next = nullptr;

	ListNode(int x){
		val = x;
	}


};


ListNode* removeFirstOccurence(ListNode* head, int value){

	ListNode dummy(0); 
	dummy.next = head;

	ListNode* prev = &dummy;
	ListNode* current = head;

	while(current!=nullptr){
		if(current->val == value){
			ListNode* toDelete = current;
			prev->next = current->next;
			current = current->next;
			delete toDelete;
			return current;	
		} else {
			prev = current;
			current = current->next;
		}

	}
	return dummy.next;

}

void printLinkedList(ListNode* head){

	ListNode* current = head;

	while(current!=nullptr){
		std::cout << current->val << " ";
		current = current->next;
	}
	std::cout << "\n";
}

ListNode* removeDuplicates(ListNode* head){

	std::unordered_set<int> set;
	ListNode dummy(0);
	dummy.next = head;

	ListNode* prev = &dummy;
	ListNode* current = head;

	while(current!=nullptr){
		if(set.count(current->val)){ // duplicate found
			ListNode* toDelete = current;
			prev->next = current->next;
			current = current->next;
			delete toDelete;
		} else {
			set.insert(current->val);
			prev = current;
			current = current->next;
		}
	}
	return head;
}

ListNode* deleteEvery2ndNode(ListNode* head){

	ListNode dummy(0);

	ListNode* prev = &dummy; // Dont even think I need this but the implementation is clean with it
	ListNode* current = head;
	int count = 1;

	while(current!=nullptr){
		if(count%2==0){ //delete this node
			ListNode* toDelete = current;	
			prev->next = current->next;
			current = current->next;
			delete toDelete;
		} else {
			prev = current;
			current = current->next;	

		}
		count++;
	
	}
	return dummy.next;

}

int main(){

		
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(4);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	head->next->next->next->next->next = new ListNode(6);
	
	printLinkedList(head);
	removeFirstOccurence(head, 2);
	printLinkedList(head);

	removeDuplicates(head);
	printLinkedList(head);

	deleteEvery2ndNode(head);
	printLinkedList(head);



	return 0;
}
