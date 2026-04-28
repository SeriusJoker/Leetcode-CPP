#include <iostream>
#include <vector>
#include <string>



struct TreeNode{

	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int x){
		val = x;
		left = nullptr;
		right = nullptr;
	}

};



int countAtLeastOneChild(TreeNode* head){

	if(head == nullptr){
		return 0;
	}

	int count = 0;

	if(head->left != nullptr || head->right != nullptr){
		count++;
	}

	int leftCount = countAtLeastOneChild(head->left);
	int rightCount = countAtLeastOneChild(head->right);

	return count + leftCount + rightCount;

}

int sumOneChild(TreeNode* head){

	if(head == nullptr){
		return 0;
	}

	int sum = 0;

	if(head->left == nullptr & head->right != nullptr){
		sum+=head->val;	
	}
	if(head->left != nullptr && head->right == nullptr){
		sum+=head->val;
	}
	
	int leftSum = sumOneChild(head->left);
	int rightSum = sumOneChild(head->right);

	return sum + leftSum + rightSum;


}

int calcDepth(TreeNode* head){

	if(head==nullptr){
		return 0;
	}

	int depth = 1; //HeadNode will always make this at depth or 1


	int leftDepth = calcDepth(head->left);
	int rightDepth = calcDepth(head->right);

	if(leftDepth > rightDepth){
		return depth + leftDepth;	
	}
	return depth + rightDepth;
	



	
	


}

int calcEvenDepth(TreeNode* head, int depth = 0){
	
	if(head==nullptr){
		return 0;
	}

	int counter = 0;

	if(depth % 2 == 0){
		counter++;	
	}

	int leftCount = calcEvenDepth(head->left, depth+1);
	int rightCount = calcEvenDepth(head->right, depth+1);

	return counter + leftCount + rightCount;


}


bool allPositive(TreeNode* head){
	
	if(head == nullptr){
		return true;
	}
		

	if(head->val < 0){
		return false;
	}
	
	bool leftPos = allPositive(head->left);
	bool rightPos = allPositive(head->right);	

	return leftPos && rightPos;

}


int main(){

	TreeNode* head = new TreeNode(1);
	head->left = new TreeNode(2);
	head->right = new TreeNode(3);

	int oneChild = countAtLeastOneChild(head);
	std::cout << oneChild << "\n";

	head->left->left = new TreeNode(4);
	oneChild = countAtLeastOneChild(head);
	std::cout << oneChild << "\n";
	
	std::cout << sumOneChild(head) << "\n";

	int depth = calcDepth(head);
	std::cout << "Depth: " << depth << "\n";
	
	int evenDepth = calcEvenDepth(head);
	std::cout << "There are " << evenDepth << " nodes an Even Depth\n";
	
	std::cout << "Are all Nodes Positive: " << std::boolalpha << allPositive(head) << "\n";
	head->left->right = new TreeNode(-2);
	std::cout << "Are all Nodes Positive: " << std::boolalpha << allPositive(head) << "\n";



	return 0;
}
