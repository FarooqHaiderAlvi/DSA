//#include <iostream>
//using namespace std;
//
//template<typename T>
//class stack {
//
//public:
//	T* array;
//	int top;
//	int size;
//
//	stack() {
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
//
//
//	void Evaluate(char opt) {
//		int b = pop();
//		int a = pop();
//		int c = 0;
//		switch (opt)
//		{
//		case '*':
//			c = a * b;
//			push(c);
//			break;
//		case '+':
//			c = a + b;
//			push(c);
//			break;
//		case '/':
//			c = a / b;
//			push(c);
//			break;
//		case '-':
//			c = a - b;
//			push(c);
//			break;
//		case '^':
//			c = pow(a, b);
//			push(c);
//			break;
//		default:
//			break;
//		}
//	}
//
//	int postToinfixEvaluate(string postExp) {
//		for (int i = 0; i < postExp.length(); i++) {
//			if (postExp[i] >= 'a' && postExp[i] <= 'z') {
//				if (postExp[i] == 'a') {
//					push(1);
//				}
//				if (postExp[i] == 'b') {
//					push(2);
//				}
//				if (postExp[i] == 'c') {
//					push(3);
//				}
//				if (postExp[i] == 'd') {
//					push(4);
//				}
//				if (postExp[i] == 'e') {
//					push(2);
//				}
//			}
//			else {
//				Evaluate(postExp[i]);
//			}
//		}
//		int ans = pop();
//		return ans;
//	}
//};
//int main()
//{
//
//	
//
//
//	string postfix;
//	cin >> postfix;
//	stack<int>int_st;
//	int ans=int_st.postToinfixEvaluate(postfix);
//	cout << ans;
//	
//	
//
//
//}
