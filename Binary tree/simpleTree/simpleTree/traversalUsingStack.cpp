//#include <iostream>                                                
//using namespace std;
//
//struct treeNode {
//
//	int data;
//	treeNode* left;
//	treeNode* right;
//	treeNode* before;
//	treeNode(int data) {
//		this->data = data;
//		left = NULL;
//		right = NULL;
//		before = NULL;
//	}
//
//};
//
//
//class stackLinkList {
//	treeNode* head;
//public:
//
//	stackLinkList() {
//		head = NULL;
//	}
//	void push(treeNode* temp) {
//
//		if (head == NULL) {
//			head = temp;
//		}
//		else {
//			temp->before = head;
//			head = temp;
//		}
//	}
//	bool isEmpty() {
//		return head == NULL;
//	}
//	treeNode* pop() {
//		treeNode* temp = head;
//
//		head = head->before;
//		return temp;
//	}
//};
//
//
//
//class treeLinkList :public stackLinkList {
//	treeNode* root;
//public:
//	treeLinkList() {
//		root = NULL;
//	}
//	void setRoot(int val) {
//
//		root = new treeNode(val);
//	}
//	void insertLeftChild(int val)
//	{
//		treeNode* temp = new treeNode(val);
//		if (root) {
//			root->left = temp;
//		}
//	}
//	treeNode* returnRoot() {
//		return root;
//	}
//	void insertRightChild(int val)
//	{
//		treeNode* temp = new treeNode(val);
//		if (root) {
//			root->right = temp;
//		}
//	}
//
//	void print() {
//		stackLinkList s;
//		treeNode* temp = root;
//		s.push(temp);
//		while (!s.isEmpty()) {
//			temp = s.pop();
//			cout << temp->data;
//			if (temp->right) {
//				s.push(temp->right);
//			}
//			if (temp->left) {
//				s.push(temp->left);
//
//			}
//
//
//
//
//		}
//
//	}
//
//};
//int main() {
//
//	treeLinkList s;
//	s.setRoot(1);
//	s.insertLeftChild(2);
//	s.insertRightChild(3);
//	s.print();
//
//}