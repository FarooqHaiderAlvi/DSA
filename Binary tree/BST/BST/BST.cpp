#include <iostream>
using namespace std;
#include <stack>
class bstNode {
public:
	int data;
	bstNode* left;
	bstNode* right;
	bstNode* next;
	bstNode(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
		next = nullptr;
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
		root = nullptr;
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
		
		bstNode* temp = root;
		bstNode* parent = nullptr;
		
		while (temp) {
			if (temp->data == val) {
				break;
			}
			else if (temp->data > val)
			{
				parent = temp;
				temp = temp->left;
			}
				
			else {
				parent = temp;
				temp = temp->right;
			}
		}
		
		if (temp) {

			// if node is root and has no child
			if (temp->left==nullptr && temp->right==nullptr && temp==root) {
				delete temp;
				root = nullptr;
			}
			//if node is root and have one child
			else	if (temp == root && (temp->left == nullptr || temp->right == nullptr))
			{
				if (temp->left) {
					root = temp->left;
				  }
				else {
					root = temp->right;
				}
				delete temp;
				temp = nullptr;
			}
			
			//if node is not root and have no child
			else if (temp != root && temp->left == nullptr && temp->right == nullptr)
			{
				delete temp;
				temp = nullptr;
			}
		//	if node is not root and have one child
			else if (temp != root && (temp->left == nullptr || temp->right == nullptr))
			{
				if (parent->left == temp)
				{
					if (temp->left) {
						parent->left = temp->left;
					}
					else {
						parent->left = temp->right;
					}
				}
				else {

					if (temp->left) {
						parent->right = temp->left;
					}
					else {
						parent->right = temp->right;
					}
				}
				delete temp;
				temp = nullptr;
			}


			else {
				bstNode* rightMin = temp->right;
				bstNode* rightMinParent =nullptr;
				while (rightMin)
				{
					if (rightMin->left == nullptr) {
						break;
					}
					rightMinParent = rightMin;
					rightMin = rightMin->left;
				}
				temp->data = rightMin->data;

				if (rightMinParent->left == rightMin) {
					rightMinParent->left = rightMin->right;
				}
				else {
					rightMinParent->right = rightMin->right;
				}

				delete rightMin;
				
			}





		}
		
		else {
			cout << "value not found" << endl;
		}
		
		

	}

		

};

int main() {
	

	Bst tree;
	int val;
	for (int i = 0; i < 8; i++)
	{
		cout << "Enter the value to be inserted: ";
		cin >> val;
		tree.insert(val);
	}
	/*tree.breathFirstTraversal();
	cout << endl;*/
	cout << "enter val to be deleted::";
	int num = 0;
	cin >> num;
	tree.deleteNode(num);
	tree.preOrder(tree.getRoot());
	
	

}