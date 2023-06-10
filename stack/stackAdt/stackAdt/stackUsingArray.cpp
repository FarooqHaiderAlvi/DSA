//#include <iostream>
//using namespace std;
//
// //time complexity
////fundamental operations of stack
////pop O(1)
////push O(1)
////isEmpty O(1)
////isFull O(1)
////return top O(1)
//////
//
////resize is not fundamental func of stack bcz it is used for array implementation only
//// resize O(n)
//template<typename T>
//class stackArray {
//
//	T* array;
//	int top;
//	int size;
//public:
//	
//
//	stackArray() {
//		top = -1;
//		size = 1;
//		array = new T[size];
//	}
//	void push(T val) {
//		if (isFull())
//		{
//			resize();
//		}
//
//           array[++top] = val;
//		
//	}
//
//	void resize() {
//		T* temp = new T[size * 2];
//		for (int i = 0; i < size; i++)
//			temp[i] = array[i];
//
//		size = size * 2;
//		delete[]  array;
//		array = temp;
//	}
//
//
//	bool isFull() {
//		return top == size - 1;
//	}
//	//by default pop function is void type top function return top val and then pop is called to remove val
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
//	~stackArray() {
//		delete[] array;
//		cout << endl << "deleting stack array destructor called" << endl;
//	}
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
//
////A stack is a linear data structure that follows the Last - In - First - Out(LIFO) principle.
////It is a collection of elements in which an element can be added or removed only from one end,
////known as the top of the stack.