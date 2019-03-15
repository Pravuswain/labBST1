#include <iostream>
using namespace std;

class Node{
public: 
	int data;
	Node * left;
	Node * right;
	Node(int value){
		data= value;
		left = NULL;
		right = NULL;
		
	} 
		

};

class BST{
public:
	Node * root;
	BST(){
		root = NULL;
	}
	void insertHelper(int value){
//as insert contains value of root if not available
		insert(root , value);
	} 
	
	void insert(Node *curr , int value){
//if root is NULL create new node
		if(root = NULL){
			root = new Node(value);		
		} 		
//else move to left or right
		else if(value < curr->data ){
//if left curr is NULL create a node
			if(curr->left = NULL) left = new Node(value);
//else insert the value of left or current node
			else insert (curr->left , value); 
		} 
//if right is NULL create a Node
		else{
			if(curr->right == NULL) right = new Node(value);
			else insert (curr->right , value);
		}
	}
//take the reference to the root
//create a helper   
	
//display
//create a helper to call the root as reference
	void displayHelper (){
		display(root);	
	}
	void display(Node *curr){
// in case of empty root
		if (curr == NULL) return;
//in order print
//first print left
		display(curr -> left);
//print root/me
		cout << curr -> data << ",";
//print right
		display(curr -> right ); 
	}
//SEARCH
	Node * search(Node * curr){
//ask if node is NULL or not using condition
		if (curr == NULL || curr -> data == value) return curr;
//if the value is not same as expected ask left and right node
//left
		else if(value < curr -> data) return search(curr -> left, value);
//Right
		else return search (curr->right , value);
	}
}; 
	





int main(){
	BST bst1;
	bst1.insertHelper(4);
	bst1.insertHelper(2);
	bst1.insertHelper(1);
	bst1.insertHelper(3);
	bst1.insertHelper(5);
	bst1.displayHelper();
	
	if(bst1.searchHelper(3) ! = NULL){
		cout<< endl << bst1.searchHelper(3)->data << endl; 
	}



}
