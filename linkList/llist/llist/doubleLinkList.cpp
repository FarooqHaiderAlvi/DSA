//#include <iostream>
//using namespace std;
//template<typename T>
//struct  Node
//{
//    T value;
//    Node* next, * before;
//
//};
//template <typename T>
//class linkList {
//
//    Node<T>* head, * tail;
//public:
//    linkList() {
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(T val) {
//
//        Node<T>* newNode = new Node<T>();
//        newNode->value = val;
//        newNode->next = NULL;
//        newNode->before = NULL;
//        if (head == NULL) {
//            head = newNode;
//            tail = newNode;
//        }
//        else
//        {
//            newNode->before = tail;
//            tail->next = newNode;
//            tail = newNode;
//        }
//    }
//    void print() {
//        Node<T>* temp = tail;
//        while (temp)
//        {
//            cout << temp->value;
//            temp = temp->before;
//        }
//    }
//  
//
//    Node<T>* returnHead() {                                     
//        return head;
//    }
//};
//
//
//
//int main()
//{
//    cout << "Hello World!\n";
//    linkList<int> st;
//    st.insert(1);
//    st.insert(2);
//    st.insert(3);
//    st.print();
//                                                               
//   
//}
