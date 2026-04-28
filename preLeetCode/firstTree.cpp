#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



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

int countNodes(TreeNode* head){

	if(head == nullptr){
		return 0;
	}
	
	int leftCount = countNodes(head->left);
	int rightCount = countNodes(head->right);
	

	return leftCount + rightCount +1;
}

int sumValues(TreeNode* head){
		
	if(head == nullptr){
		return 0;
	}

	int leftCount = sumValues(head->left);
	int rightCount = sumValues(head->right);

	return leftCount + rightCount + head->val;

}
//Leaf node is a node with 0 children
int countLeafNodes(TreeNode* head){
	
	if(head == nullptr){
		return 0; 
	}	

	if(head->left == nullptr && head->right == nullptr){
		return 1; // This would be a node with 0 leaves
	}

	int leftCount = countLeafNodes(head->left);
	int rightCount = countLeafNodes(head->right);

	return leftCount+rightCount;

}


int countEqual(TreeNode* root, int target){

	if(root == nullptr){
		return 0;
	}

	int count = 0;
	
	if(root->val == target){
		count++;
	}

	int countLeft = countEqual(root->left, target);
	int countRight = countEqual(root->right, target);

	count = count + countLeft + countRight;

	return count;


}

int countAtLeast(TreeNode* root, int target){

	if(root == nullptr){
		return 0;
	}

	int count = 0;
	if(root->val >= target){
		count++;
	}

	int leftCount = countAtLeast(root->left, target);
	int rightCount = countAtLeast(root->right, target);

	return count + leftCount + rightCount;

}

int sumLeaves(TreeNode* head){
	
	if(head==nullptr){
		return 0;
	}

	int count = 0;

	if(head->left==nullptr && head->right==nullptr){
		count = head->val;
	}

	int leftSum = sumLeaves(head->left);
	int rightSum = sumLeaves(head->right);

	return count + leftSum + rightSum;


}


int main(){

	TreeNode* head = new TreeNode(1);
	TreeNode* left1 = new TreeNode(2);
	TreeNode* right1 = new TreeNode(3);

	head->left = left1;
	head->right = right1;

	int nodeCount = countNodes(head);
	std::cout << nodeCount << "\n";

	int sumCount = sumValues(head);
	std::cout << "Sum: " << sumCount << "\n";

	int leafCount = countLeafNodes(head);
	std::cout << "Leaf count: " << leafCount << "\n";

	TreeNode* newHead = new TreeNode(1);
	newHead->left = new TreeNode(2);
	newHead->left->left = new TreeNode(3);
	
	leafCount = countLeafNodes(newHead);
	std::cout << "Leaf count: " << leafCount << "\n";

	TreeNode* equalHead = new TreeNode(1);
	equalHead->left = new TreeNode(1);
	equalHead->left->right = new TreeNode(2);
	equalHead->left->left = new TreeNode(1);

	int equal = countEqual(equalHead, 1);
	std::cout << "Equal: " << equal << "\n";

	int atleast = countAtLeast(equalHead,1);
	std::cout << "Atleast: " << atleast << "\n";

	std::cout << "Leaf Sum: " << sumLeaves(equalHead) << "\n";
	


}
