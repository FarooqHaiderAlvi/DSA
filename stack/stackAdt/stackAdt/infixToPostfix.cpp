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
//	//function to convert infixExp to postfix
//	string infixToPostfix(string infixExp) {
//		string exp;
//		for (int i = 0; i < infixExp.length(); i++) {
//			int temp = int(infixExp[i]);
//			if (temp >= 97 && temp <= 122) {
//				exp += infixExp[i];
//
//			}
//			else if (infixExp[i] == '(') {
//				push(infixExp[i]);
//			}
//			//when a closing parenthesis come,pop until opening parenthesis
//			else if (infixExp[i] == ')')
//			{
//				while (topval() != '(') {
//					exp += pop();
//				}
//				pop();
//
//			}
//
//			else {
//				if (isEmpty()) {
//					push(infixExp[i]);
//					continue;
//				}
//
//				//handling dmas and presendence 
//				else {
//					for (;;) {
//						if (!isEmpty()) {
//							char popVal = topval();
//							if ((infixExp[i] == '+' || infixExp[i] == '-') && (popVal == '*' || popVal == '/' || popVal == '^'))
//							{
//								exp += pop();
//							}
//							else if (infixExp[i] == '*' && (popVal == '/' || popVal == '^')) {
//								exp += pop();
//							}
//							else if (infixExp[i] == '/' && (popVal == '^')) {
//								exp += pop();
//							}
//							else if ((infixExp[i] == '-') && (popVal == '*' || popVal == '/' || popVal == '^' || popVal == '+')) {
//								exp += pop();
//							}
//
//							else {
//								break;
//							}
//						}
//						else {
//							break;
//						}
//
//					}
//					push(infixExp[i]);
//
//				}
//			}
//
//		}
//
//		while (!isEmpty()) {
//			exp += pop();
//
//		}
//		return exp;
//
//	}
//
//
//
//
//};
//int main()
//{
//
//	stack<char> st;
//	string infixExp;
//	cout << "Enter expression::";
//	cin >> infixExp;
//	string postfix=st.infixToPostfix(infixExp);
//	cout << postfix;
//
//
//
//}
