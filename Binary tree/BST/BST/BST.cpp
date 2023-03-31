#include <iostream>
using namespace std;

class bstNode {
public:
	int data;
	bstNode* left;
	bstNode* right;
	bstNode* next;
	bstNode(int val) {
		data = val;
		left = NULL;
		right = NULL;
		next = NULL;
	}
};
class Queue {
	bstNode* front, * rear;
public:
	Queue() {
		front = rear = NULL;
	}
	void enque(bstNode* temp) {


		if (front == NULL) {
			front = rear = temp;
		}
		else {
			rear->next = temp;
			rear = temp;
		}
	}
	bstNode* deque() {
		bstNode* temp = front;
		if (front)
			front = front->next;
		return temp;
	}
};
class Bst :public Queue {
	bstNode* root;
public:
	Bst() {
		root = NULL;
	}

	bstNode* getRoot() {
		return root;
	}

	void insert(int val) {

		if (!root)
			root = new bstNode(val);
		else {
			bstNode* temp = root;
			bstNode* prev = temp;
			while (temp) {
				if (temp->data > val) {
					prev = temp;
					temp = temp->left;
				}
				else {
					prev = temp;
					temp = temp->right;
				}
			}
			if (prev->data > val)
				prev->left = new bstNode(val);
			else prev->right = new bstNode(val);

		}
	}
	bstNode* searchVal(int val) {
		bstNode* temp = root;
		while (temp) {
			if (temp->data == val) {
				return temp;
			}
			if (temp->data > val) {
				temp = temp->left;
			}
			else {
				temp = temp->right;
			}
		}
		return NULL;
	}
	void inOrder(bstNode* root)
	{
		if (!root)
			return;
		inOrder(root->left);
		cout << root->data << endl;
		inOrder(root->right);
	}
	void preOrder(bstNode* root)
	{
		if (!root)
			return;
		cout << root->data << endl;
		preOrder(root->left);
		preOrder(root->right);
	}
	void postOrder(bstNode* root)
	{
		if (!root)
			return;

		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << endl;
	}

	bool isBst(bstNode* root) {
		bstNode* temp = root;


	}
	void breathFirstTraversal() {

		Queue q;
		bstNode* temp = root;
		if (temp) {
			q.enque(temp);
			while (temp) {
				temp = q.deque();
				if (temp) {
					cout << temp->data;
					if (temp->left)
						q.enque(temp->left);
					if (temp->right)
						q.enque(temp->right);
				}
			}
		}
	}
	//not work properly
	void deleteNode(int val) {
		bstNode* deleteNode = searchVal(val);
		bstNode* temp = root;
		bstNode* prev = temp;
		while (temp) {
			if (temp->data == val) {
				break;
			}
			else if (temp->data > val) {
				prev = temp;
				temp = temp->left;
			}
			else {
				prev = temp;
				temp = temp->right;
			}
		}
		if (deleteNode->left == NULL && deleteNode->right == NULL) {
			deleteNode = NULL;
		}
		else {
			prev->right == NULL;
		}

	}

		

};

int main() {
	Bst tree;
	int val;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the value to be inserted: ";
		cin >> val;
		tree.insert(val);
	}
	tree.breathFirstTraversal();
	cout << endl;
	tree.deleteNode(10);
	tree.preOrder(tree.getRoot());
}