#include <iostream>
using namespace std;

template<typename T>
class stack {

public:
	T* array;
	int top;
	int size;

	stack() {
		top = -1;
		size = 10;
		array = new T[size];
	}
	void push(T val) {
		if (!isFull())
			array[++top] = val;
		else
		{
			resize();
			array[++top] = val;
		}
	}

	void resize() {
		T* d = new T[size * 2];
		for (int i = 0; i < size; i++)
			d[i] = array[i];

		size = size * 2;
		delete[]  array;
		array = d;
	}


	bool isFull() {
		return top == size - 1;
	}

	T pop() {
		if (isEmpty()) {
			cout << "Stack is empty";
			T t;

		}
		else
			return array[top--];
	}
	T topval() {

		return array[top];
	}

	bool isEmpty() {
		return top == -1;
	}



	bool validParenthesis(string parenthesisExp) {

		for (int i = 0; i < parenthesisExp.length(); i++) {
			char temp = parenthesisExp[i];
			if (isEmpty()) {
				push(temp);
			}

			else if ((topval() == '(' && temp == ')')
				|| (topval() == '{' && temp == '}')
				|| (topval() == '[' && temp == ']')) {

				// If we found any complete pair of bracket
				// then pop
				pop();
			}
			else {
				push(temp);
			}
		}

		return isEmpty();



	}

	
};
int main()
{




	string paren="{[][](())}";
	stack<char>st;
	if (st.validParenthesis(paren))
		cout << "valid";
	else
		cout << "Invalid";
	






}
