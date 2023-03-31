//#include <iostream>
//using namespace std;
//template<typename T>
//struct  Node
//{
//    T value;
//    Node* next;
//    
//};
//template <typename T>
//class linkList {
//
//    Node<T>* head,* tail;
//public:
//    linkList(){
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(T val) {
//
//        Node<T>* newNode = new Node<T>();
//        newNode->value = val;
//        newNode->next = NULL;
//        if (head == NULL) {
//            head = newNode;
//            tail = newNode;
//        }
//        else {
//          
//            tail->next = newNode;
//            tail = tail->next;
//        }
//    }
//    void print() {
//        Node<T>* temp = head;
//        while (temp)
//        {
//            cout << temp->value;
//            temp = temp->next;
//        }
//   }
//    void PrintReverseUsingRecursion(Node<T>* temp) {
//        if (temp == NULL)
//            return;
//        PrintReverseUsingRecursion(temp->next);
//        cout << temp->value;
//    }
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
// 
//    st.PrintReverseUsingRecursion(st.returnHead());
//}
