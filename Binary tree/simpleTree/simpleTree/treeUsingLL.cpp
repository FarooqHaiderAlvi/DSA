//#include <iostream>
//using namespace std;
//
//template<typename t>
//struct treeNode {
//
//	t data;
//	treeNode* left ;
//	treeNode* right;
//	treeNode(t data) {
//		this->data = data;
//		left = NULL;
//		right = NULL;
//	}
//	treeNode() {
//		left = NULL;
//		right = NULL;
//	}
//
//};
//template<class t>
//class treeLinkList {
//	treeNode<t>* root;
//public:
//	void setRoot(t val) {
//		
//		root = new treeNode<t>(val);
//	}
//	void insertLeftChild(t val) 
//	{
//		treeNode<t>* temp = new treeNode<t>(val);
//		if (root) {
//			root->left = temp;
//		}
//	}
//	treeNode<t>* returnRoot() {
//		return root;
//	}
//	void insertRightChild(t val)
//	{
//			root->right = temp;
//		treeNode<t>* temp = new treeNode<t>(val);
//		if (root) {
//		}
//	}
//	void PreOrder(treeNode<t>* parent) {
//		if (!parent)
//			return;
//		cout << parent->data;
//		PreOrder(parent->left);
//		PreOrder(parent->right);
//  }
//
//	void InOrder(treeNode<t>* parent) {
//		if (!parent)
//			return;
//		PreOrder(parent->left);
//		cout << parent->data;
//		PreOrder(parent->right);
//  }
//	void postOrder(treeNode<t>* parent) {
//		if (!parent)
//			return;
//		PreOrder(parent->left);
//		PreOrder(parent->right);
//		cout << parent->data;
//  }
//};
//
//
//
//int main() {
//
//	treeLinkList<int> tree;
//	tree.setRoot(1);
//	tree.insertLeftChild(2);
//	tree.insertRightChild(3);
//	//tree.PreOrder(tree.returnRoot());
//	cout << endl;
//	//tree.InOrder(tree.returnRoot());
//	tree.postOrder(tree.returnRoot());
//	return 0;
//	
//	
//}