#include <iostream>
using namespace std;
template<typename T>
class TreeUsingArray {
    
    T* array;
    double height;
    bool* status;
public:
    TreeUsingArray(int h) {
         height = pow(2, h) - 1;
        array = new T[height];
        status = new bool[height];
        for (int i = 0; i < height; i++) {
            status[i] = false;
        }
    }

    void setRooT(T val) {
        array[0] = val;
        status[0] = true;
    }
    void setLeftChild(T val, int ind) {
        ind = ind * 2 + 1;
        array[ind] = val;
        status[ind] = true;
    }
    void setRightChild(T val, int ind) {
        ind = ind * 2 + 2;
        array[ind] = val;
        status[ind] = true;
    }
    void print() {
        /*for (int i = 0; i < height; i++) {
            cout << array[i] << endl;
        }*/
        for (int i = 0; i < height; i++) {
            array[i] = i + 1;
            status[i] = true;
        }
        status[3] = false;
        status[5] = false;
    }

    void PreOrderUsingRecursion(int ind) {
        if (ind >= height)
            return;
        if (status[ind]!=false) {
            cout << array[ind];
        }
        PreOrderUsingRecursion((ind * 2 + 1));
        PreOrderUsingRecursion((ind * 2 + 2));
    }
    void InOrderUsingRecursion(int ind) {
        if (ind >= height)
            return;
       
        InOrderUsingRecursion((ind * 2 + 1));
        if (status[ind]) {
            cout << array[ind];
        }
        InOrderUsingRecursion((ind * 2 + 2));
    }
    void PostOrderUsingRecursion(int ind) {
        if (ind >= height)
            return;

        PostOrderUsingRecursion((ind * 2 + 1));
        PostOrderUsingRecursion((ind * 2 + 2));
        if (status[ind]) {
            cout << array[ind];
        }
       
    }
};
int main()
{
    
    TreeUsingArray<int> tree(3);
    tree.setRooT(1);
  

    int selection = 0;
    int ind = 0; int val;
   /* for (;;) {
        cout << "enter 1 to break" << endl;
        cout << "enter 2 for left child" << endl;
        cout << "enter 3 for right child" << endl;
        cin >> selection;
        if (selection == 1)
            break;
        else if (selection == 2) {

            cout << "enter index to set left child:";
                cin >> ind;
                cout << "enter value left child:";
            cin>> val;
            tree.setLeftChild(val, ind);
        }
        else {
            cout << "enter index to set right child:";
            cin >> ind;
            cout << "enter value right child:";
            cin >> val;
            tree.setRightChild(val, ind);
        }
    }*/

    tree.print();
    tree.PostOrderUsingRecursion(0);
}


