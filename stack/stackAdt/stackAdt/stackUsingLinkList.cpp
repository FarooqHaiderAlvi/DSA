//#include <iostream>                                                
//using namespace std;
//
//template<typename t>
//struct mynode {
//	t data;
//	mynode* before;
//};
//template<typename t>
//class stacklinklist {
//	mynode<t>* head;
//public:
//
//	stacklinklist() {
//		head = null;
//	}
//	void push(t val) {
//		mynode<t>* temp = new mynode<t>();
//		temp->data = val;
//		temp->before = null;
//		if (head == null) {
//			head = temp;
//		}
//		else {
//			temp->before = head;
//			head = temp;
//		}
//	}
//	mynode<t>* pop() {
//		mynode<t>* temp = head;
//		if (head) {
//			head = head->before;
//		}
//		return temp;
//	}
//};
//
//int main() {
//	stacklinklist<int>s;
//	for (int i = 0; i < 3; i++) {
//		s.push(i);
//	}
//	while (true)
//	{
//		mynode<int>* temp;
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