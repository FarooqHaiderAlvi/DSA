#include <iostream>
using namespace std;
//time complexity of both enque and deque is O(1)
template<typename T>
struct myNode {
	T data;
	myNode* next;
};
template<typename T>
class Queue {
	myNode<T>* front, * rear;
public:
	Queue() {
		front = rear = NULL;
	}
	void enque(T val) {
		myNode<T>* temp = new myNode<T>();
		temp->data = val;
		temp->next = NULL;
		if (front == NULL) {
			front = rear = temp;
		}
		else {
			rear->next = temp;
			rear = temp;
		}
	}
	myNode<T>* deque() {
		myNode<T>* temp = front;
		if (front)
			front = front->next;
		return temp;
	}
};

int main() {
	Queue<int> s;
	s.enque(1);
	s.enque(2);
	s.enque(3);
	myNode<int>* temp = s.deque();
	if (temp) {
		cout << temp->data << endl;
	}
	else {
		cout << "queue is empty";
	}

}