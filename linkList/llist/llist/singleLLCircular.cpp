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
//            head =tail= newNode;
//           
//        }
//        else {
//          
//            tail->next = newNode;
//            tail = newNode;
//        }
//        tail->next = head;
//    }
//    void print() {
//        int count = 0;
//        Node<T>* temp = head;
//        while (temp)
//        {
//            if (count == 6) {
//                break;
//            }
//            cout << temp->value;
//            temp = temp->next;
//            count++;
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
//    st.print();
//}
