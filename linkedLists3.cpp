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

void printLinkedList(ListNode* head){

	ListNode* current = head;

	while(current!=nullptr){
		std::cout << current->val << " ";
		current = current->next;
	}
	std::cout << "\n";
}


ListNode* deleteBlockOfDuplicated(ListNode* head){

	ListNode dummy(0);
	dummy.next = head;

	ListNode* prev = &dummy;
	ListNode* current = dummy.next;
	ListNode* next = current->next; 
	int valDelete;

	while(current!=nullptr && current->next != nullptr){
		if(next->val == current->val){
			valDelete = current->val;
			
			//Find first value not equal to val to delete
			while(current->val == valDelete){
				prev->next = current->next;
				current = current->next;
				if(current->next != nullptr){
					next = current->next;
				}
			}

		} else {
			prev = current;	
			current = current->next;
			if(current!=nullptr){
				next = current->next;

			}
			

		}
		
	} 
	return dummy.next;
}

ListNode* removeNode(ListNode* node){
	
	ListNode* toDelete = node->next;

	node->val = node->next->val;
	node->next = node->next->next;
	delete toDelete;
	return node;

}

ListNode* rotateRight(ListNode* head, int k){

	ListNode* current = head;

	for(int i = 0; i < k; ++i){
		while(current != nullptr){
			if(current->next == nullptr){
				head->val = current->val;
				break;

			} else {
				current->next->val = current->val;
				current = current->next;
			}
		}
		current=head;
		ahead=current->next;
	}

	return head;

}

int main(){

	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(3);
	head->next->next->next->next = new ListNode(3);
	head->next->next->next->next->next = new ListNode(4);
	printLinkedList(head);
	printLinkedList(head);
	head = rotateRight(head, 1);
	printLinkedList(head);


	return 0;

}
