//#include <iostream>                                                
//using namespace std;
//
//template<typename T>
//struct myNode {
//	T data;
//	myNode* before;
//};
//template<typename T>
//class stackLinkList {
//	myNode<T>* head;
//public:
//
//	stackLinkList() {
//		head = NULL;
//	}
//	void push(T val) {
//		myNode<T>* temp = new myNode<T>();
//		temp->data = val;
//		temp->before = NULL;
//		if (head == NULL) {
//			head = temp;
//		}
//		else {
//			temp->before = head;
//			head = temp;
//		}
//	}
//	myNode<T>* pop() {
//		myNode<T>* temp = head;
//		if (head) {
//			head = head->before;
//		}
//		return temp;
//	}
//};
//
//int main() {
//	stackLinkList<int>s;
//	for (int i = 0; i < 3; i++) {
//		s.push(i);
//	}
//	while (true)
//	{
//		myNode<int>* temp;
//		temp = s.pop();
//		if (temp) {
//
//			cout << temp->data << endl;
//		}
//		else {
//			cout << "stack is empty";
//			break;
//		}
//	}
//}