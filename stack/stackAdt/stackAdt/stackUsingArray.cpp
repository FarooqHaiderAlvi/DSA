//#include <iostream>
//using namespace std;
//
// //time complexity
////pop O(1)
////push O(1)
////isEmpty O(1)
////isFull O(1)
////return top O(1)
//// resize O(1)
//template<typename T>
//class stackArray {
//
//public:
//	T* array;
//	int top;
//	int size;
//
//	stackArray() {
//		top = -1;
//		size = 1;
//		array = new T[size];
//	}
//	void push(T val) {
//		if (!isFull())
//			array[++top] = val;
//		else
//		{
//			resize();
//			array[++top] = val;
//		}
//	}
//
//	void resize() {
//		T* d = new T[size * 2];
//		for (int i = 0; i < size; i++)
//			d[i] = array[i];
//
//		size = size * 2;
//		delete[]  array;
//		array = d;
//	}
//
//
//	bool isFull() {
//		return top == size - 1;
//	}
//
//	T pop() {
//		if (isEmpty()) {
//			cout << "Stack is empty";
//			T t;
//
//		}
//		else
//			return array[top--];
//	}
//	T topval() {
//
//		return array[top];
//	}
//
//	bool isEmpty() {
//		return top == -1;
//	}
//
//};
//int main()
//{
//	stackArray<int> s;
//	for (int i = 0; i < 4; i++) {
//		
//		s.push(i);
//			  }
//	for (int i = 0; i < 4; i++) {
//		cout<<s.pop();
//	}
//}
